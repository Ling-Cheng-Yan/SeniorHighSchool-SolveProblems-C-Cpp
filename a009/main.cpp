#include <iostream>
#include <string>

using namespace std;

int main() //要按enter才出第二行是因為前面有先吃到行，所以終結了。
{
    string str;
    while(getline(cin, str)){
        for(int i = 0; i < str.size(); i++){
            cout << (char)(str[i] - 7);
            if((char)(str[i] - 7) == '.'){
                cout << endl;
            }
        }
    }
    return 0;
}
