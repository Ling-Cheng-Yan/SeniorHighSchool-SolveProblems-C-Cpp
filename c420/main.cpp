#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n) {
        for(int i = 1; i <= n; i++) {
            cout << endl;
            for(int j = 0; j < n - i; j++){
                cout << "_";
            }
            for(int j = 0; j < (2 * i) - 1; j++) {
                cout << "*";
            }
            for(int j = 0; j < n - i; j++){
                cout << "_";
            }
        }
    }
    return 0;
}
