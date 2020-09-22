#include <iostream>

using namespace std;

int main()
{
    int n, k;
    while(cin >> n) {
        for(int i = 1; i <= n; i++) {
            cout << endl;
            for(int j = 0; j < n - i; j++){
                cout << "_";
            }
            for(int j = 0; j < i; j++) {
                cout << "*";
            }
        }
    }
    return 0;
}
