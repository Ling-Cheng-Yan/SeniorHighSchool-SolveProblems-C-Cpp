#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

int main1()
{
    int x, y;
    if( x >= 'A' && x <= 'H') { // 比較時主要以ascii去比。
        y = x - 'A' + 10;
    }
}

int main2()
{
    float num = 6.28f; // f為單精度浮點數，但不寫也沒差。
}

int main3()
{
    char beep = '\a'; // 也可cout << "\a";
    cout << beep;
    cout << "\n";
    char line = '\n';
    cout << line;
}

int main4()
{
    for(int i = 1; i<10; i++) { //在第27line，cout << j; 不會有東西，同理在23~28line不會有變數i。
        for(int j = 0; j<9; j++) {

        }

    }
}


int main5() /*第46行是遇到行就終結，第49行是遇到空字元才終結(但要先吃到有效字元再吃到空字元才終結。cin >> x >> y;輸入2 3，有一空字元在2和3之間，
              吃到2後，再吃到空字元就結束，接著後面一直空都不會吃到。*/
{
    string str1;
    getline(cin, str1);
    cout << str1;
    char str2[20] = {'C','S','I','E'};  // 除了 char str[]="CSIE"; 不需要先宣告大小，其他都必須先宣告大小。
    cin >> str2;
    cout << str2;
}


int main6() //cout<<c1+c2的字元為ASCII，除非有先宣告是char才會是字元的 。
{
    string str; /*最好要include<string> ，這是C++的type=C的type為char str[]={'c','s','i','e'}。  也等於char str="csie" 。 另外c++的可自動變動，
                但ctype的不行。 不過兩個要用到指定的[i]的話，都要先訂好SIZE大小。*/

    char c1 = '!';
    char c2 = '0';
    char c3 = c1 + c2;
    cout << c1 + c2 << " " << c3;

}







