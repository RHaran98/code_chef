#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n;
    string s1,s2;
    cin >> t;
    bool match_flag;
    while (t--) {
        match_flag = true;
        cin >> s1 >> s2;
        n = s1.size();
        for (int i = 0; i < n ; i++) {
            if (s1[i] == '?' || s2[i] == '?')
                continue;
            else if (s1[i] != s2[i]) {
                match_flag = false;
                break;
            }
        }
        cout << (match_flag?"Yes":"No") << endl;
    }

    return 0;
}