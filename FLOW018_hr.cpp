#include<iostream>
using namespace std;

inline int fact(char n) {
    int fact = 1;
    for (int i = n; i >=2 ; i--) {
        fact*=i;
    } 
    return fact;
}

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    char n;
    cin>>t;
    while(t--) {
        cin>>n; 
        n = n - 48;
        cout<< fact(n) << endl;
    }

    return 0;
}