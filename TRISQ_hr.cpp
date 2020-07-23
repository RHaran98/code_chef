#include<iostream>
#include<cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        n = (int)((n/2.0) - 1);
        cout << n*(n+1) / 2 << endl;
    }
    return 0;
}