#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int x = 0;
        int y = 0;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            if(a == 0){
                y += b;
            }
            else if(a == 1){
                x += b;
            }
            else if(a == 2){
                y -= b;
            }
            else{
                x -= b;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
