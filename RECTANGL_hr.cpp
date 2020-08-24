#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    int a,b,c,d;
    cin >> t;
    while (t--) {
        cin>>a>>b>>c>>d;
        cout << ((a == b && c == d) 
                    ? "YES" 
                    : ((a==c && b == d) 
                        ? "YES" 
                        : ((a==d && b == c) 
                            ? "YES" 
                                : "NO"))) << "\n";
    }
    return 0;
}