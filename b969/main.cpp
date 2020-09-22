#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1;
    string str2;
    while(getline(cin,str1)){
            getline(cin,str2);
            cout << str2 << ", ";
            for(int i = 0; i < str1.size(); i++){
                if(str1[i] != ' '){
                    cout << str1[i];
                }
                else{
                    cout << endl << str2 << ", ";
                }
            }
    }

    return 0;
}
