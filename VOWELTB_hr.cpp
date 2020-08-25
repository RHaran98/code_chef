#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    string s;
    cin >> s;
    if (s=="A" || s=="E" || s=="I" || s=="O" || s== "U")
        cout <<"Vowel";
    else
        cout <<"Consonant";

    return 0;
}