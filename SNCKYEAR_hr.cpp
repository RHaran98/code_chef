#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int yr,t;
    cin >> t;
    while (t--) {
        cin >> yr;
        if (yr==2010 || yr==2015 || yr==2016 || yr==2017 || yr== 2019)
            cout <<"HOSTED\n";
        else
            cout <<"NOT HOSTED\n";
    }
    return 0;
}