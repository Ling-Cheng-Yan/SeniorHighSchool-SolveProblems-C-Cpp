#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
    int a;
    int arr[10];

    char c;
    char cstr[] = "hello";
    cout << cstr << endl;
    string str;
    for(int i = 0; i < 50; i++) {
        cout << str[i] << endl;  //有先設定size(for loop內有設定了)才可用str[i]。
    }
    cout << str << endl << str.size() << endl;

    str[0] = 'a';
    str[1] = 'b';
    cout << str;


    /*for(int i = 0; i < 100; i++){
        str += i;
        cout << i << " " << str << " " << str.size() << endl;
    }*/
    return 0;
}
