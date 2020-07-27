#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int houses[101] = {0};
    int t,m,x,y,cop;
    cin >> t;
    while (t--) {
        cin >> m >> x >> y;
        x = x*y; y = 0;
        for (int i = 0; i < m ; i++) {
            cin >> cop;
            houses[cop] = 1;
            for (int j = 1; j <= x ; j++ ) {
                if ((cop - j) >= 0 )
                    houses[cop - j] = 1;
                if ((cop + j ) <= 100)
                    houses[cop + j] = 1;
            }
        }
        for (int i = 1;i <= 100; i++) {
            if (houses[i] == 0) 
                y++;
            houses[i] = 0;
        }

        cout << y << endl;
    }
    return 0;
}