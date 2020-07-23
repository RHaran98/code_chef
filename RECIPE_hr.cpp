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
    int t,n;
    int gcd,x;
    int array[50];
    cin>>t;

    while (t--) {
        cin>>n;
        cin>>gcd;
        array[0] = gcd;
        for (int i = 1; i< n;i++) {
            cin>>x;
            array[i] = x;
            if (gcd == 1)
                continue;
            else
                gcd = find_gcd(gcd,x);
        }
        for (int i = 0; i< n; i++) {
            cout<< array[i] / gcd << " ";
        }   
        cout << endl;

    }
    return 0;

}
