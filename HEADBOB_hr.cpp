#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n;
    string s;
    bool iFlag;
    bool yFlag;
    cin >> t;
    while (t--) {
        iFlag = false;
        yFlag = false;
        cin >> n;
        cin >> s;
        for (int i = 0;i < n ; i++) {
            if (s[i] == 'I') {
                iFlag = true;
                break;
            }
            if (s[i] == 'Y') {
                yFlag = true;
                break;
            }
        }
        if (iFlag) cout <<"INDIAN" << endl;
        else if (yFlag) cout << "NOT INDIAN" << endl;
        else cout << "NOT SURE" << endl;
    }
    return 0;

}