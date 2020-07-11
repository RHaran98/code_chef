#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int SIZE = 1000000; 

    int array[SIZE] = {0};
    int t,x,max = 0;
    cin>>t;
    while(t--){
        cin>>x;
        if (x > max) max = x;
        array[x]++;
    }
    for(int i; i<= max ;i++){
        if (array[i] != 0) {
            for(int j = 0; j < array[i] ; j++) {
                cout << i <<endl;
            }
        } 
    }
    return 0;
}