#include <iostream>
#include <string>
using namespace std;


int main(){
    string str;

    while(cin >> str){

        bool finished = false;

        // 0 1 2 3 4 5 6 7 8
        for(int i=0; i < str.size()/2 + 1; i++){
            if(str[i] != str[str.size() - i - 1]){
                cout << "no";
                finished = true;
                break;
            }
        }

        if (!finished){
            cout << "yes";
        }
        cout << endl;
    }

    return 0;
}

int main1()  //¿ù»~
{
    string str1;
    string str2;
    string str3;
    while(cin >> str1) {
        for(int i = 0; i < (str1.size() / 2); i++) {
            str2 = str1[i];
        }
        for(int i = str1.size(); i > (str1.size() / 2); i--) {
            str3 = str1[i];
        }
        if(str3 == str2) {
            cout << "yes";
        }
        else {
            cout << "no";
        }
    }


    return 0;
}


