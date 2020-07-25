#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int tests;
    float h, c, t;
    bool c1,c2,c3;
    cin >> tests;
    while (tests--) {
        cin >> h >> c >> t;
        c1 = h > 50;
        c2 = c < 0.7;
        c3 = t > 5600;
        if (c1 && c2 && c3)
            cout << "10" << endl;
        else if (c1 && c2)
            cout << "9" << endl;
        else if (c2 && c3)
            cout << "8" << endl;    
        else if (c1 && c3)
            cout << "7" << endl;
        else if (!c1 && !c2 && !c3)
            cout << "5" << endl;
        else
            cout << "6" << endl;
    }

    return 0;
}