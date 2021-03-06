#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int primes[2005] = {0};
    primes[0] = primes[1] = 1;
    for (int i = 2; i <= 1002; i++) {
        for (int j = 2*i; j < 2005; j+=i) {
            primes[j] = 1;
        }
    }

    int t,x,y, nearest_prime;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        x += y;
        
        for (nearest_prime = x+1; nearest_prime < 2005; nearest_prime++ ) 
            if (primes[nearest_prime] == 0)
                break;

        cout << nearest_prime - x << endl;
    }

    return 0;
}