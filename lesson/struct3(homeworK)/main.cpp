#include <iostream>
#include <cstdlib>

using namespace std;

struct student{
    int math[3], eng[3];
    int avg_math ; //被assign
    int avg_eng ; //被assign
    int sum_math = 0; //沒被assign
    int sum_eng = 0; //沒被assign
};

int main(){
    const int n = 10;
    struct student students[n];
    for(int i = 0; i < n; i++){
        cout << "student" << (i+1) << endl;
        for(int k = 0; k < 3; k++){
            students[i].math[k] = rand() % 101;
            students[i].eng[k] = rand() % 101;
            cout << students[i].math[k] <<" ";
            cout << students[i].eng[k] <<" ";
        }
        cout << endl;
        for(int k = 0; k < 3; k++){
            students[i].sum_math += students[i].math[k];
        }
        for(int k = 0; k < 3; k++){
            students[i].sum_eng += students[i].eng[k];
        }
        students[i].avg_math = students[i].sum_math / 3;
        students[i].avg_eng = students[i].sum_eng / 3;
        cout << "數學平均:" << students[i].avg_math << " ";
        cout << "英文平均:" << students[i].avg_eng << " " << endl << endl;
    }
    int counter1[n];
    int counter2[n];
    for(int i = 0; i < n; i++){
        counter1[i] = 1;
        counter2[i] = 1;
    }

    for(int i = 0; i < n; i++){
        for(int k = 1; k < n; k++){
            if(students[i].avg_math < students[k].avg_math){
                counter1[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int k = 1; k < n; k++){
            if(students[i].avg_eng < students[k].avg_eng){
                counter2[i]++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << "student" << i+1 << "數學排名:" << counter1[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << "student" << i+1 << "英文排名:" << counter2[i] << endl;
    }

}
