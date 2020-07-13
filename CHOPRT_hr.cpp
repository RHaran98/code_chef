#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    int a,b;
    cin>>t;
    while (t--) {
        cin>>a>>b;
        if (a > b) 
            cout<<">"<<endl;
        else if (b > a)
            cout<<"<"<<endl;
        else
            cout<<"="<<endl;
        
    }

    return 0;
}