#include <iostream>

using namespace std;

int main()  //要先宣告array大小，不然會錯值。
{
    int iarr[100][100];
    int row;
    int column;

    while(cin >> row >> column){
                // cin >> column

        for(int i = 0; i < row; i++)
            for(int j = 0; j < column; j++) {
                cin >> iarr[i][j];
            }

        for(int i = 0; i < column; i++) {
            for(int j = 0; j < row; j++) {
                cout << iarr[j][i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
