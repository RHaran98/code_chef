#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int n;
    cin>>n;
    if (n%4 == 0) {
        cout<< (n+1);
        return 0;
    }
    cout<< (n-1);

    return 0;
}