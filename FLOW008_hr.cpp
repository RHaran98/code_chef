#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n;
    cin>>t;
    while (t--) {
        cin>>n;
        if (n < 10) 
            cout<<"Thanks for helping Chef!\n";
        else 
            cout<<"-1\n";
    }
    return 0;
}