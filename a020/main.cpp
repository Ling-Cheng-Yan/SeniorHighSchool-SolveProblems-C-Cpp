#include <iostream>

using namespace std;

int main()
{
    char id[11];
    while(cin >> id) {
        int num[10];
        int sum = 0;
        for(int i=1; i<sizeof(id)-1; i++) {
            num[i] = id[i] - '0';

            if(i == 9) {
                sum += num[i] * 1;
            } else {
                sum += num[i] * (9 - i);
            }
        }
        char x = id[0];
        int y;

        if( x >= 'A' && x <= 'H') {
            y = x - 'A' + 10;
        }
        if( x == 'I') {
            y = 34;
        }
        if( x >= 'J' && x <= 'N') {
            y = x - 'J' + 18;
        }
        if( x == 'O') {
            y = 35;
        }
        if( x >= 'P' && x <= 'V') {
            y = x - 'P' + 23;
        }
        if( x == 'W') {
            y = 32;
        }
        if( x >= 'X' && x <= 'Y') {
            y = x - 'X' + 30;
        }
        if( x == 'Z') {
            y = 33;
        }
        sum += (y / 10) * 1 + (y % 10) * 9;
        if( sum%10==0 ) {
            cout << "real" << endl;
        } else {
            cout << "fake" << endl;
        }
    }
    return 0;
}
