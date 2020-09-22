#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(cin >> str){
        for(int i = 1; i < str.size() - 1; i++){
            str[i] = '_';
        }
        for(int i = 0; i < str.size(); i++){
            cout << str[i];
        }

    }
    return 0;
}
