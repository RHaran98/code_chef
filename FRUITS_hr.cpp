#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n,m,k;
    cin >> t;
    while (t--) {
        cin >> n >> m >>k;
        cout << max(0, abs(n-m) - k) << endl;
    }
    return 0;
}