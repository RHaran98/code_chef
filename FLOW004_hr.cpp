#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    string s;
    cin>>t;
    while(t--) {
        cin>>s;
        cout<<(s[0] - '0') + (s[s.size() -1] - '0') <<endl;
    }
    return 0;
}