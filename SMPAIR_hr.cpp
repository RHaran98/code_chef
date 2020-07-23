#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t, smallest, second_smallest,n,x;
    cin >>t;
    while (t--) {
        cin>>n;
        cin >> smallest;
        cin >> second_smallest;
        if (second_smallest < smallest) {
            second_smallest = smallest + second_smallest;
            smallest = second_smallest - smallest;
            second_smallest-=smallest;
        }

        for (int i = 2;i<n;i++) {
            cin >> x;
            if (x < smallest) {
                second_smallest = smallest;
                smallest = x;
            }
            else if (x == smallest) {
                second_smallest = x;
            }
            else if ( x > smallest && x < second_smallest)
                second_smallest = x;
        }
        cout << smallest + second_smallest << endl ;
    }
    return 0;
}