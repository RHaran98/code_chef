#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n;
    long min,x;
    cin >> t;

    while (t--) {
        cin >> n;
        cin >> min;
        for(int i = 0; i < (n-1);i++) {
            cin >> x;
            if (x < min)
                 min = x;

        }
        cout << min*(n-1) << endl;
    }


    return 0;
}