#include <iostream>

using namespace std;

int main()
{
    int N;
    while(cin >> N){
        if(N >= 0){
            cout << N << endl;
        }
        else{
            cout << N - (2*N) << endl;
        }
    }
    return 0;
}
