#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    string s;
    cin>>t;
    while (t--) {
        cin>> s;
        if (s== "b" || s == "B")
            cout<<"BattleShip"<<endl;
        else if (s == "c" || s == "C")
            cout<<"Cruiser"<<endl;
        else if (s == "d" || s == "D")
            cout<<"Destroyer"<<endl;
        else
            cout<<"Frigate"<<endl;
    }
    return 0;
}