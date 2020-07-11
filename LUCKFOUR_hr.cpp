#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);

    int t,cnt;
    cin>>t;
    string s;

    while(t--) {
        cnt = 0;
        cin>>s;
        for (int i = 0; i < s.size();i++){
            if (s[i] == 52) 
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}