#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n,d;
    cin>>t;
    while (t--) {
        cin>>d>>n;
        for (int i = 0 ;i < d; i++) {
            n = (n*(n+1))/2;
        }
        cout << n << endl;
    }
    return 0;
}