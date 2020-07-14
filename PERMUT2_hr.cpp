#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int n;
    int arr[100000];
    bool perm_flag;
    while(1) {
        perm_flag = true;
        cin>>n;
        if ( n == 0)
            break;
        for (int i = 0;i<n;i++)
            cin>>arr[i];
        
        for (int i = 1;i <= n; i++) {
            if (arr[arr[i-1] - 1 ] != i){
                perm_flag = false;
                break;
            }
        }
        if (perm_flag)
            cout<<"ambiguous"<< endl;
        else 
            cout << "not ambiguous" << endl;
    }

    return 0;
}