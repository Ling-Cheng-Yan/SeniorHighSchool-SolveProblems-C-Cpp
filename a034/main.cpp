#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main2()
{
    string arr;
    int N;
    cin >> N;
    for(int i = floor(log2(N)); i >= 0; i--) {
        if(floor(log2(N)) >= i) {
            arr = (char)(floor(log2(N)));
            N = N - pow(2,i);
        } else {
            arr[i] = '0';
        }

    }
    for(int i = 0; i < arr.size(); i++) {
        if((arr[i] - 48)> 0) {
            arr[i] = '1';
            cout << arr[i];
        } else {
            cout << arr[i];
        }
    }
    return 0;
}


int main(){
    int n; // 123
    /*str[0] = 1;  ¿ù»~
    //str[1] = 0;  ¿ù»~
    //cout << str; ¿ù»~ */

    while(cin >> n){
        string str; // 1111011
        for(int i = floor(log2(n)); i >= 0; i--) {
            int e = pow(2,i);
            //cout << "i=" << i << " n=" << n << " e=" << e << " n-e=" << n - e;

            if((n - e) >= 0){
                n = n - e;
                //cout <<" " << '1'  << endl;
                str += '1';
            }
            else{
                //cout <<" " << '0'  << endl;
                str += '0';
            }
        }
        cout << str << endl;
    }
    return 0;
}



//  10  -->  1010
//  10 = _8 + _4 + _2 + _1

//  123 = 2^6 + ???
//  log2(123) = 6.9~6   2^6 = 64
//  6  123 = 2^6 + ??? = 64 + 59
//  5  59 = 2^5 + ???  = 32 + 27
//  4  27 = 2^4 + ???  = 16 + 11
//  3  11 = 2^3 + ??? = 8 + 3
//  2  3 = 0*2^2 + 3
//  1  3 = 2^1 + 1
//  0  1 = 2^0
//  1111011


