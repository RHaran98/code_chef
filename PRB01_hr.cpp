#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int t,n,limit;
    cin>>t;
    bool prime_flag;
    while (t--) {
        prime_flag = true;
        cin>>n;
        limit = (int)(sqrt(n)); 

        if (n==1) {
            cout<<"no\n";
            continue;
        } 

        for(int i = 2; i<=limit; i++ ) {
            if (n%i == 0) {
                prime_flag = false;
                break;
            }
        }
        if (prime_flag) cout<<"yes\n";
        else cout <<"no\n";
    }

    return 0;
}