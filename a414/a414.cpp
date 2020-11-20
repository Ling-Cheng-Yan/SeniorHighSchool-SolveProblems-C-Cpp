#include <cstdio>
using namespace std;

int main() {
    int n;

    while( scanf("%d", &n) != EOF ) {
        if( n == 0 )
            break;

        int carryOnCnt = 0;
        if( n & 0x00 )
            carryOnCnt = 0;
        else {
            while( n & 0x01 ) {
                carryOnCnt++;
                n = n >> 1;
            }
        }

        printf("%d\n", carryOnCnt);
    }

    return 0;
}