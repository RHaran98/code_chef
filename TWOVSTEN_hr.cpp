#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    cin>> t;
    int x;
    while (t--) {
        cin >> x;
        if (x%10 == 0 ) cout << 0 << endl;
        else if (x%5==0) cout << 1 << endl;
        else cout << -1 << endl;
    }

    return 0;
}