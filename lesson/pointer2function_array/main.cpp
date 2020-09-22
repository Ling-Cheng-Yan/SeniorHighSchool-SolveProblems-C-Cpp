#include <iostream>

using namespace std;

double getAverage(const int arr[], int size)
{
    int i, sum = 0;
    double avg;

    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = double(sum) / size;

    return avg;
}

int main1()
{
    int iarr1[5] = {100, 200, 300, 400, 500};
    int iarr2[4] = {123, 456, 789, 234};
    cout << "sizeof(iarr1)=" << sizeof(iarr1) <<" " << "sizeof(iarr2)=" << sizeof(iarr2) <<endl;
    cout << getAverage(iarr1,sizeof(iarr1) / sizeof(int)) << endl;
    cout << getAverage(iarr2,sizeof(iarr2) / sizeof(int));
    return 0;
}

void func1(int arr[], int size)
{
    cout << arr << endl;
    for(int i = 0; i < size; i++){
        arr[i]++;
        cout << arr[i];
    }
    cout << endl;
}

int main2()
{
    int iarr3[3] = {1, 2, 3};
    cout << iarr3 <<endl;
    func1(iarr3,3);
    func1(iarr3,3);
    for(int i = 0; i < 3; i++){
        cout << iarr3[i];
    }
    return 0;
}

int innerproduct(const int arr1[], const int arr2[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr1[i] * arr2[i];
    }
    return sum;
}

int main()
{
    int iarr4[3] = {1, 2, 3};
    int iarr5[3] = {4, 5, 6};
    cout << innerproduct(iarr4, iarr5, 3);
}



