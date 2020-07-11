#include<iostream>
#include <algorithm> 
using namespace std;

string multiply(int x, string s){ 
    int carry = 0,val,mult,rem;
    for (int i = 0; i < s.size() ; i++) {
        val = (int)s[i] - 48;
        mult = x * val + carry;
        s[i] = (mult % 10) + 48;
        carry = mult / 10;
    }
    if (carry != 0) {
        while (carry!= 0){
            rem = carry%10;
            carry /=10;
            s.push_back((rem + 48));
        }
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,n;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        s = "1";
        for(int i = 2;i <=n; i++) {
            s = multiply(i,s);
        }
        reverse(s.begin(), s.end());
        cout<<s<<endl;   

    }
    



    return 0;
}