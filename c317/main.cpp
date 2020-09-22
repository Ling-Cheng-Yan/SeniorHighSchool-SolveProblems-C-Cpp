#include <iostream>

using namespace std;
int main()
{
    int N;
    cin >> N; //´Xµ§¿é¤J
    for(int i = 0; i < N; i++){
        // total = ax + by
        // min(x + y)
        //     10, 0
        //      9, 1
        //      9, 2
        //      8, 0
        //      8, 1
        //      8, 2
        //      8, 3
        int total, a, b;
        int r;
        bool finished = false;
        cin >> total >> a >> b;

        for(int x = total / a; x >= 0; x--){
            r = total - x * a;
            if(r % b == 0){
                cout << x + (r / b) << endl;
                finished = true;
                break;
            }
        }
        if(!finished){
            cout << -1 << endl;
        }
    }
    return 0;
}
