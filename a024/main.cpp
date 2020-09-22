#include <iostream>

using namespace std;

int gcd(int m, int n)  //nonrecursive
{
    while(n != 0) {
        int g;
        g = n;
        n = m % n;
        m = g;
    }
    return m;
}

int main()
{
    int m, n;
    while(cin >> m >> n) {
        cout << gcd(m,n) << endl;
    }
    return 0;
}
