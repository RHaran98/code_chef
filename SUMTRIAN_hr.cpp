#include<iostream>
#include<cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t;
    cin>>t;
    int size,n;
    int array[101*50];
    int bottom_max;
    int top,top_left;
    while (t--) {
        cin>>n;
        size = (n * (n+1) ) /2;
        for (int i = 0;i < size;i++) {
            cin>>array[i];
        }

        
        for (int i = 1;i < n;i++) {
            for (int j = 0; j <= i; j++) {
                top = (j == i) ? 0 : (i*(i+1))/2 + j - i; 
                top_left = (j == 0) ? 0 : (i*(i+1))/2 + j - i - 1;
                array[(i*(i+1))/2 + j] += max(array[top], array[top_left]);
            }
            
        }
        bottom_max = array[size - 1];
        for (int i = size - 2; i >= size - n ; i--) 
            if (array[i] > bottom_max)
                bottom_max = array[i];
        cout << bottom_max <<endl;
    }
    return 0;
}
