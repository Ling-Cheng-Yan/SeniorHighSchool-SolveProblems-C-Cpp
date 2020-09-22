#include <iostream>

using namespace std;

/*

an_1 an
a1 a2 a3 a4 a5
1  2  4  7  11
  1  2  3  4
  r1 r2 r3 r4

1  2  5  10 17
  1  3  5  7

rn = r1 + (n-1)*d = n - d + 1
an = an-1 + rn-1 = an-1 + n - d
               k = k' + i - d
*/


int main()
{
    int d;
    while(cin >> d){
        int r;
        int an, an_1 = 1;
        int sum = 0;
        for(int n = 1; n <= 50; n++){
            r = 1 + (n-1) * d;
            an = an_1 + r;
            sum += an_1;
            //cout << "an= " << an << " an_1=" << an_1 << " r=" << r << " sum=" << sum << endl;
            an_1 = an;
        }
        cout << sum << endl;
    }
    return 0;
}
