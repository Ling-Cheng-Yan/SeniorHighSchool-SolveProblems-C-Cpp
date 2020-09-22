#include <iostream>

using namespace std;

int main()
{
    int sum, n, m;
    while(cin >> n){
        sum = (n / 12) * 50;
        m = n - ((n / 12) * 12);
        sum = sum + (m * 5);
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
