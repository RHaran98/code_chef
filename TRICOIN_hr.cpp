#include<iostream>
#include<cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    long n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout<<floor((-1 + sqrt(1 + 8*n))/2) << endl;
    }
    return 0;
}