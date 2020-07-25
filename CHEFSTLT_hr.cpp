#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);

    int t, size, wildcard_cnt, diff;
    string s1,s2;
    cin >> t;
    while (t--) {
        diff = wildcard_cnt = 0;
        cin >> s1 >> s2;
        size = s1.size();
        for (int i = 0 ; i < size;i++){
            if (s1[i] == '?' || s2[i] == '?') 
                wildcard_cnt++;
            else if (s1[i]!=s2[i])
                diff++;
        }
        cout << diff << " " << diff + wildcard_cnt << endl; 
    }

    return 0;
}