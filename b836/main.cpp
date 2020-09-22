#include <iostream>
using namespace std;

int main()
{
    long int n, m;
    while(cin >> n >> m) {
        if(m != 0) {
            for(long int i = 1; i < 2147483649; i++) {
                n -= m;
                if(n == 1) {
                    cout << "Go Kevin!!" << endl;
                    break;
                } else if(n < 0) {
                    cout << "No Stop!!" << endl;
                    break;
                }
            }
        }
        else{
            cout << "Go Kevin!!" << endl;
        }
    }
    return 0;
}
