#include <iostream>

using namespace std;

int fib(int n)
{
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        int a = 0;
        int b = 1;
        int c;
        for(int i = 1; i < n; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main()
{
    int data; //幾組data
    cin >> data;
    for(int i = 0; i < data; i++){
        int A, B; //input A~B的範圍
        cin >> A >> B;
        int counter = 0; //用來計算多少個fib在範圍內
        for (int k = 0; k < 31; k++){ // 31是因為input範圍最大為1000000
            if((A <= fib(k) && fib(k) <= B) || (B <= fib(k) && fib(k) <= A)){
                cout << fib(k) << endl;
                counter++;
            }
        }
        cout << counter << endl;
        if(i < data - 1){
            cout << "------" << endl;
        }
        else{
            break;
        }
    }
    return 0;
}
