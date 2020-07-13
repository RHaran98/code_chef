#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t; 
    cin>>t;
    string s;
    bool pal_flag ;
    while (t--) {
        cin>>s;
        pal_flag = true;
        for(int i = 0; i< s.size()/2;i++)
            if (s[i] != s[s.size() - 1 - i] ) {
                pal_flag = false; 
                break;
            }
        if (pal_flag) cout <<"wins\n";
        else cout <<"loses\n";
    }

    return 0;
}