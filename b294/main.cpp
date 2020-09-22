#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            int b;
            cin >> b;
            sum += b * i;
        }
        cout << sum << endl;
    }
    return 0;
}
