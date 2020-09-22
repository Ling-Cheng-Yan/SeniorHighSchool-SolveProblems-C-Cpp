#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(getline(cin,str)){
        for(int i = 0; i < str.size(); i++){
            if(str[i] != ' '){
                cout << str[i];
            }
            else{
                cout << endl;
            }
        }
    }
    return 0;
}
