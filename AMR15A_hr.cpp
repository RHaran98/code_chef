#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    int n;
    int score;
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%2 ==  0)
            score++;
        else
            score --;
    }
    if (score > 0)
        cout <<"READY FOR BATTLE\n";
    else 
        cout <<"NOT READY\n";

    return 0;
}