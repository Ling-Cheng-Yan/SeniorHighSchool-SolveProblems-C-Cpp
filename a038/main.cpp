#include <iostream>
#include <string>

using namespace std;

//1 2 3 4 5
//1 0 0 0 0

int main()
{
    int flag = 0; //表示需要刪除
    string str;
    while(cin >> str){
        for(int i = (str.size() - 1); i >= 0; i--){
            if(str[i] == '0' && flag == 0){
                continue;
            }
            else{
                flag = 1;
            }
            cout << str[i];
        }
        if(flag == 0){
            cout << '0';
        }
        cout << endl;
    }
    return 0;
}
