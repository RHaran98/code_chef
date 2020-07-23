#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false); //Make cin as fast as scanf
// 	cin.tie(NULL);
    int t;
    long p,q;
    double prod;
    cin>>t;
    while (t--) {
        cin>>q>>p;
        prod = p*q;
        cout<<fixed <<setprecision(6) << ((q > 1000) ? (0.9 *prod) : (1.0 * prod)) << endl; 
    }
    return 0;
}