#include<iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //Make cin as fast as scanf
	cin.tie(NULL);
    int n,k,cnt=0,clk_no;
    cin >> n >> k;
    int array[1001] = {0};
    string inp;
    for (int i = 0 ; i<1001;i++)
                array[i] = 0;
    for (int i = 0;i< k;i++) {
        cin >> inp;
        if (inp == "CLOSEALL") {
            for (int i = 0 ; i<1001;i++)
                array[i] = 0;
            cnt = 0;
        }
        else {
            cin >> inp;
            clk_no = stoi(inp);
            if (array[clk_no] == 0) {
                array[clk_no] = 1;
                cnt++;
            }
            else {
                array[clk_no] = 0;
                cnt--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}