#include <iostream>

using namespace std;

int main()
{
    int N;
    while(cin >> N && N != 0){
        for(int i = 1; i <= N; i++){
            cout << endl;
            for(int j =0; j < N - i; j++){
                cout << "_";
            }
            for(int j =0; j < i; j++){
                cout << "+";
            }

        }
    }
    return 0;
}
