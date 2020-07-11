#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,x;
    cin>>t;
    char c;
    int sum;
    string s;
    getline(cin,s);
    while(t--){
        sum = 0;
        getline(cin,s);
        for (char const &c : s){
            x = (int)c - 48;
            sum += x;
        }
        cout<<sum<<endl;
    }
    return 0;
}