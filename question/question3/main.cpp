#include <iostream>
#define SIZE 5

using namespace std;
int show(int b[])
{
    for(int i = 0; i < SIZE; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}

int test1(int []);

int change(int b[])
{
    for(int i = 0; i < SIZE; i++){
        b[i] = {100};
    }
    return 0;
}

int main()
{
    int score[SIZE] = {89, 54, 73, 95, 71};
    cout << "學生成績=";
    show(score);
    change(score);
    cout << "更改後成績=" << endl;
    show(score);
    return 0;
}




int test1(int b[])
{
    int sum = 0;
    for(int i = 0; i < SIZE; i++){
        sum += b[i];
    }

}

/* 陣列當引數是傳遞位址，意思是test1()算出來非學生成績和嗎? */
