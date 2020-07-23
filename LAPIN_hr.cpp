#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t, mid, n;
    string s;
    bool isLapinFlag;
    int arr[26];

    cin >> t;
    while (t--) {
        isLapinFlag = true;
        for (int i = 0;i < 26;i++) arr[i] = 0;

        cin >>s;
        n = s.size();
        mid = s.size() / 2;
        for (int i = 0 ; i < mid; i++) {
            arr[s[i] - 'a'] ++;
            arr[s[n- i -1] - 'a']--;
        }
        for (int i = 0;i < 26;i++) {
            if (arr[i]!=0) {
                isLapinFlag = false;
                break;
            }
        }
        cout << (isLapinFlag ? "YES" : "NO") << endl;
    }

    return 0;
}