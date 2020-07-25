#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    char stack[150]; int size;
    int t;
    cin >> t;
    string s;
    while (t--) {
        size = 0;
        cin >> s;
        for (char c : s) {
            if (c >= 'a' && c <= 'z')
                cout << c;
            else if ( c == ')')
                cout << stack[size--];
            else if (c == '(')
                continue;
            else 
                stack[++size] = c;
        }
        cout << endl;
    }



    return 0;
}