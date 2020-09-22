#include <iostream>

using namespace std;

int main()
{
    int wenwen, round, b[4];
    cin >> wenwen >> round;

    for(int j = 3; j >= 0; j--){
        b[j] = wenwen % 10;
        wenwen = wenwen / 10;
    }

    for(int i = 0; i < round; i++){
        int guess, a[4];
        cin >> guess;
        for(int j = 3; j >= 0; j--){
            a[j] = guess % 10;
            guess = guess / 10;
        }

        int count1 = 0;
        int count2 = 0;
        for(int j = 0; j < 4; j++){
            if(a[j] == b[j]){
                count1++;
            }
            else{
                for(int m = 0; m < 4; m++){
                    if((a[j] == b[m]) && (j != m)){
                        count2++;
                    }
                }
            }
        }
        cout << count1 << "A" << count2 << "B" << endl;
    }
    return 0;
}
