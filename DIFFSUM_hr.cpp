#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int n1,n2;
    cin>>n1>>n2;
    cout<< (n1>n2 ? n1 -n2: n1 + n2);
    return 0;
}