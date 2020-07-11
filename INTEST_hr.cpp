#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);

    int n,k,cnt = 0,x;
    cin>>n>>k;

    for (int i = 0; i < n; i++){
        cin>>x;
        if (x%k== 0) cnt++;
    }
    cout<<cnt;
}