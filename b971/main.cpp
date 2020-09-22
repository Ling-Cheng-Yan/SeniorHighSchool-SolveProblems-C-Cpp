#include <iostream>

using namespace std;

int main()
{
    int a1, an, d;
    while(cin >> a1 >> an >> d){
        if(d >= 0){
            for(int i = a1; i <= an; i += d){
                cout << i << " " ;
            }
            int a1 = 0;
            int an = 0;
            int d = 0;
            cout << endl;
        }
        else{
            for(int i = a1; i >= an; i += d){
                cout << i << " " ;
            }
            int a1 = 0;
            int an = 0;
            int d = 0;
            cout << endl;
        }
    }
    return 0;
}
