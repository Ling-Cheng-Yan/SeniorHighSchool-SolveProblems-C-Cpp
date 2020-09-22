#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string str;
    while(getline(cin, str)) {
        int sum = 0;
        for(int i = 0; i < str.size(); i++) { // for loop 的i=0在二進制的1100是先從最左邊的1開始為index。

            sum += pow(2,str.size() - i - 1) * (str[i] - 48);
        }
        cout << sum << endl;
    }
    return 0;
}


