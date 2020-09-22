#include <iostream>

using namespace std;

int main()
{
    int num;
    while(cin >> num && num != 0 && num != 1){
        for(int i = 1; i < num; i++){
            if(!(i % 7 == 0)){
                cout << i ;
                if(i != num - 1){
                    cout << " ";
                }
            }
            else{
                continue;
            }
        }
        cout << endl;
    }
    return 0;
}
