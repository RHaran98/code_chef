#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,a,b,c;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        cout << ((a > b) ? ( (b > c) ? b : (c > a) ? a : c) : ( (a > c) ? a : (c > b)?b : c )) << endl; 
    }
    return 0;
}