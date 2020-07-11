#include<iostream>
using namespace std;

int main(){
    int x; 
    float y;
    cin>>x;
    cin>>y;

    if( (x%5==0) && (x+0.5 < y) )
        cout << y-(float)x - 0.5;

    return 0;
}