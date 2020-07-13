#include<iostream>
using namespace std;

int check_sqrt(int n,int upper,int lower) {
    if (n <= 2)
        return 1;
    int i = (upper + lower) / 2;

    int i_square = i*i;
    
    if (i_square <= n &&  (i+1)*(i+1) > n ) 
        return i;
    else if (i_square > n)
        return check_sqrt(n, i-1,lower );
    else 
        return check_sqrt(n,upper,i+1);
}

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t,x;
    cin>>t;
    while(t--) {
        cin>>x;
        cout<<check_sqrt(x,x/2, 0)<<endl;
    }
    return 0;
}