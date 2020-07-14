#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int denoms[6] = {100,50,10,5,2,1};
    int t,n, notes;
    cin>>t;
    while(t--) {
        notes = 0;
        cin>>n;
        for(int i = 0;i < 6; i++) {
            notes+= n / denoms[i];
            n %= denoms[i];
        }
        cout << notes <<endl;
    }



    return 0;
}