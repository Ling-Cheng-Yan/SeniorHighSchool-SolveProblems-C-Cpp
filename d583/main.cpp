#include <iostream>

using namespace std;

int main()
{
    int n;
    int x;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> x;
        }
        for(int i = 1; i <= n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
