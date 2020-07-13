#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,a,b;
    cin>>t;
    while(t--) {
        cin>>a>>b;
        cout << (a>b?a:b) << " " << (a+b) << endl;
    }

    return 0;
}