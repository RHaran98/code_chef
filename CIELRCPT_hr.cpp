#include<iostream>
using namespace std;

inline int count_bits (int n) {
    int count = 0;
    for (int i = 0; i < 11; i++ ) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n;
    cin>>t;
    while (t--) {
        cin >> n;
        cout << ((n >> 11) + count_bits(n)) << "\n";
    }
    return 0;
}