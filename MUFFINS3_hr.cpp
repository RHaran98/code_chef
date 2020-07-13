#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        cout<<(n/2 + 1)<<endl;
    }
    return 0;
}