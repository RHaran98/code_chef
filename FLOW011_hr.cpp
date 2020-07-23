#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int t, salary;
    float gross_salary;
    cin >> t;
    while (t--) {
        cin>>salary;
        if (salary < 1500)  
            gross_salary = salary <<1 ;
        else
            gross_salary = salary + 500 + (0.98 * salary);
        cout << setprecision(2) << fixed << gross_salary << endl ;
    }
    return 0;
}