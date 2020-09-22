#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        for(int i = 1; i <= n; i++){
            cout << endl;
            for(int j = 0; j < i; j++){
                cout << "*";
            }
        }
    }
    return 0;
}
