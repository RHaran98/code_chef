#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t; string s;
    bool trailing_zero ;
    cin>>t;
    while(t--){
        trailing_zero  = true;
        cin>>s;
        for (int i = s.size() -1; i>=0 ; i--) {
            if( trailing_zero && s[i] == 48) {
                continue;
            }
            else {
                trailing_zero = false;
                cout << s[i];
            }
        }
        cout << endl;

    }

    return 0;
}