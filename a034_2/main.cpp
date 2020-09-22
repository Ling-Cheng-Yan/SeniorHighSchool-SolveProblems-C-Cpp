#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    char binary[16];
    int sum = 0;
    while(cin >> binary[16]) {
        for(int i = 0; i < sizeof(binary); i++) {
            sum += pow(2,sizeof(binary) - i) * (binary[i] - 48);

        }
        cout << sum;
    }

    return 0;
}
