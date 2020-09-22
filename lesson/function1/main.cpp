#include <iostream>
#include <cmath>

using namespace std;

/*  12  9
    9   3
    3   0   -->  3

    gcd(a, b) = gcd(b, a % b)
    15  11
    11  4
    4   3
    3   1
    1   0   -->   1    */

int gcd2(int m, int n)  //nonrecursive
{
    while(n != 0) {
        int g;
        g = n;
        n = m % n;
        m = g;
    }
    return m;
}

int gcd(int m, int n)   //recursive
{
    if(n == 0) {
        return m;
    } else {
        return gcd(n, m % n);
    }
}

bool is_prime(int n)
{
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i<=sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}



int main()
{
    for(int n=1; n<=100; n++) {
        if(is_prime(n) == true) {
            cout << n << endl;
        }
    }
}

int main2()
{
    int m, n;
    while(cin >> m >> n) {
        cout << gcd(m,n) << endl;
    }
    return 0;
}
