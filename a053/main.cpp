#include <iostream>

using namespace std;

int main()
{
    int n; //input
    while(cin >> n) {
        if(0 <= n && n <= 10) {
            n = n * 6;
        } else if(11 <= n && n <= 20) {
            n = ((n - 10) * 2) + 60;
        } else if(21<= n && n <=40) {
            n = ((n - 20) * 1) + 60 + 20;
        } else if(n >= 40) {
            n = 100;
        }
        cout << n << endl;
    }
    return 0;
}
