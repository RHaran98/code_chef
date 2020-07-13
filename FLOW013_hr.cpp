#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    cin>>t;
    int acc,a;
    while (t--) {
        cin>>acc;
        cin>>a;
        acc+=a;
        cin>>a;
        acc+=a;
        if (acc == 180)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }

    return 0;
}