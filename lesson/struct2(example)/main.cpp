#include <iostream>

using namespace std;

int pass(int a[], int size){
    int sum = 0;
    double avg;
    for(int i = 0; i < size; i++){
        sum += a[i];
    }
    avg = (double)sum / size;
    if(avg >= 60){
        return 1;
    }
    else{
        return 0;
    }
}

struct student{
    string name;
    int math[3], eng[3];
};

int main(){ //一個學生有2科目，每科目有三次考試，計算學生成績是否及格。
    struct student student1;
    cout << "輸入一個學生姓名:";
    cin >> student1.name;
    cout << "輸入3次數學成績:";
    for(int i = 0; i < 3; i++){
        cin >> student1.math[i];
    }
    cout << "輸入3次英文成績:";
    for(int i = 0; i < 3; i++){
        cin >> student1.eng[i];
    }

    cout << student1.name << endl;
    for(int i = 0; i < 3; i++){
        cout << student1.math[i] <<" ";
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << student1.eng[i] << " ";
    }
    cout << endl;

    cout << pass(student1.math,3);
    cout << endl;
    cout << pass(student1.eng,3);

    cout << endl;
    return 0;
}
