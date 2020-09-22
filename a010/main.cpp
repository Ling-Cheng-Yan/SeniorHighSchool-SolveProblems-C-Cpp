#include <iostream>
#include <cmath>

using namespace std;

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

/*

   2 |_12
     2| 6
      3|3
        1

  2^3 * 3^1 * 5^2  = 600

  arr[0]  arr[1]   arr[2]
    2       3        5

   e[0]   e[1]     e[2]
    0       1        2

*/

#define max_n 100000

int main()
{
    int n;
    while(cin >> n) {
        // basic data, for 質因數拆解
        int prime[max_n];
        int e[max_n];

        for(int i=0; i<max_n; i++) {
            e[i] = 0;
        }

        int k = 0;
        for(int i = 1; i <= n; i++) {
            // criteria for 質因數 = 是質數 && 是因數 ==> 是因數 && 是質數
            if((n % i) == 0 && is_prime(i)) {
                prime[k] = i;
                //cout << "arr[" << k << "]=" << arr[k] << endl;
                k++;
            }
        }

        int last_i = 0;
        while(n > 1) {
            for(int i = last_i; i<k; i++) {
                // 嘗試所有質因數  找次方
                //cout << "n=" << n << " i=" << i << " last_i=" << last_i << endl;
                if(n % prime[i] == 0) {
                    e[i]++;
                    n = n / prime[i];
                    //cout << arr[i] << " e[" << i << "]=" << e[i] << endl;
                    last_i = i;
                    break;
                }
            }
        }

        // 輸出結果
        for(int i = 0; i < k; i++) {
            if(e[i] <= 0) {
                continue;
            }

            if(e[i]==1) {
                cout << prime[i];
            } else {
                cout << prime[i] << "^" << e[i];
            }

            if(i < last_i) {
                cout << " * ";
            }
        }
        cout << endl;
    }

    return 0;
}
