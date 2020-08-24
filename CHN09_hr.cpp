#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    string s;
    int t,a,b,size;
    cin >> t;
    while(t--) {
        cin>>s;
        size = s.size();
        a=0,b=0;
        for (char c:s)
            (c =='a')?++a:++b;

        cout << min(a,b) << endl;
    }
    return 0;
}