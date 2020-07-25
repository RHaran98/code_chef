#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n,k, max;
    cin >> t;
    while (t--) {
        max = 0;
        cin >> n >> k;
        for ( int i = 1; i <= k ; i++)
            if (n%i > max)
                max = n%i;

        cout << max << endl;
    }
    return 0;
}