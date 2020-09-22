#include <iostream>

using namespace std;

int main()
{
    int a, b, c, max1;
    while(cin >> a >> b >> c){
        max1 = a;
        if(b > max1){
            max1 = b;
        }
        if(c > max1){
            max1 = c;
        }
        cout << max1 << endl;
    }
    return 0;
}
