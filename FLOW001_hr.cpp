#include <iostream>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	// cin.tie(NULL);

    int t;
    int x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        cout<<x+y<<endl;
    }

    return 0;
}