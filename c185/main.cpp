#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        cout << "Hey ";
        for(int i = 0; i < str.size(); i++){
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
