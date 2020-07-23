#include<iostream>
using namespace std;

int find_gcd(int n1, int n2) {
    if (n1 == 0)
        return n2;
    else 
        return find_gcd(n2%n1, n1);
}


int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t; 
    long a,b,gcd;
    cin>>t;

    while(t--) {
        cin>>a>>b;
        gcd = find_gcd(a,b);
        cout<<gcd<<" "<<(a*b)/(gcd)<<endl;
    }
    return 0;
}