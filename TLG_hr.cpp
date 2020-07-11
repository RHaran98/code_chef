#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t, lead = 0;
    cin>>t;
    int x=0,y=0, x_, y_;
    int max = 0;
    while (t--) {
        cin >> x_ >> y_;
        x += x_;
        y += y_;
        lead = x - y;
        if ( abs(max) < abs(lead) )
            max = lead;

    }
    cout << (max > 0 ? 1:2) <<" "<< abs(max);
    return 0;
}