#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,r;
    int x[3], y[3];
    cin >> t;
    int comm_flag;
    while (t--) {
        comm_flag = 2;
        cin >> r;

        cin >> x[0] >> y[0];
        cin >> x[1] >> y[1];
        cin >> x[2] >> y[2];

        for (int i = 0; i < 3; i++) {
            if (r*r >= ((x[(i+1)%3] - x[(i+2)%3] )*(x[(i+1)%3] - x[(i+2)%3] ) + (y[(i+1)%3] - y[(i+2)%3] )*(y[(i+1)%3] - y[(i+2)%3] )) ) {
                comm_flag --;
                if (comm_flag == 0)
                    break;
            }
        }
        cout << (comm_flag <= 0 ? "yes" : "no") << endl;
    }


    return 0;
}