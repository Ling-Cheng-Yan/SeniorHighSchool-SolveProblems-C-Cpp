#include <iostream>

using namespace std;

int &max(int &a, int &b) //先不管
{
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}


int main()
{
    int i = 10;
    int j = 20;
    max1(i,j) = 100; // 少見用法，不管。
    cout << "i=" << i << "j=" << j << endl;
    return 0;
}





/* 函數宣告+自訂內容寫在main前，是寫成 int max(int &a, int &b){ }，而在main內要使用時是
寫max(x,y) (假設要要傳引數是x和y) 嗎?*/  //都寫在main前就好，就不需要宣告test1(int, int)了，可直接像寫main()一樣。

