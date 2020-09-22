#include <iostream> // #include<iostream.h>無法使用? ans;古老的
#include <cmath>
using namespace std;

int main()
{
    cout << sqrt(8) << endl ;

    cout << "Hello world!" ;
    cout << "\ntype\tbytes" ;
    cout << "\nint\t" <<sizeof(int) ;
    cout << "\nfloat\t" <<sizeof(float) ;
    cout << "\nshort\t" <<sizeof(short) ;
    cout << "\ndouble\t" <<sizeof(double) ;
    cout <<"\nchar\t" <<sizeof(char) <<"\n" ;
    cout << 26 <<"\n" ;
    cout << 032 <<"\n" ;
    cout <<0x1A << endl ;
    cout << "hello world!" <<endl ;  // <<endl和 <<"\n"有差嗎?  ans:沒差
    cout << 3.14f <<endl ; //有沒有打f有差嗎?
    cout << 1UL <<endl ; //UL有啥差?
    cout << 2e4 <<endl ;
    int x = 5 ;
    cout << x <<endl ;
    char y= 'A' ;
    double z=3.14 ;
    cout << y <<endl << z <<endl ;


    const int e =5 ;

    cout << "\n型態\t大小(bytes)" ;
    cout << "\nint\t" << sizeof(int) ;
    cout << "\nlong\t" << sizeof(long) ;
    cout << "\nfloat\t" << sizeof(float) ;
    cout << "\ndouble\t" << sizeof(double) ;
    cout << "\nchar\t" << sizeof(char) ;
    cout << "\n" ;

    int number = 10 ;
    cout << (double) number / 3  <<endl ;

    int g ;
    cout << "輸入為3的倍數的數:" ;
    cin >> g ;
    cout << (g%3? 'N': 'Y') <<endl;

    x = -1;
    if (x > 0){
        cout << "x是正數" << endl;
        cout << "x =" << x << endl;
    } else {
        cout << "x非正數" << endl;
    }

    int score = 66;


    if(score >= 90) {
        cout << "得A" << endl;
    } else if(score >= 80 && score < 90) {
        cout << "得B" << endl;
    } else if(score >= 70 && score < 80) {
        cout << "得C" << endl;
    } else if(score >= 60 && score < 70) {
        cout << "得D" << endl;
    }else {
        cout << "得E(不及格)" << endl;
    }

    int num = 75;
    cout <<  (num > 70 && num < 80) << endl;
    cout << (num > 80 || num < 75) << endl;
    cout << !(num > 80 || num < 75) << endl;


    cout << "AND運算：" << endl;
    cout << "0 AND 0\t\t" << (0 & 0) << endl;
    cout << "0 AND 1\t\t" << (0 & 1) << endl;
    cout << "1 AND 0\t\t" << (1 & 0) << endl;
    cout << "1 AND 1\t\t" << (1 & 1) << endl;

    cout << "OR運算：" << endl;
    cout << "0 OR 0\t\t" << (0 | 0) << endl;
    cout << "0 OR 1\t\t" << (0 | 1) << endl;
    cout << "1 OR 0\t\t" << (1 | 0) << endl;
    cout << "1 OR 1\t\t" << (1 | 1) << endl;

    cout << "XOR運算：" << endl;
    cout << "0 XOR 0\t\t" << (0 ^ 0) << endl;
    cout << "0 XOR 1\t\t" << (0 ^ 1) << endl;
    cout << "1 XOR 0\t\t" << (1 ^ 0) << endl;
    cout << "1 XOR 1\t\t" << (1 ^ 1) << endl;

    cout << "NOT運算：" << endl;
    cout << "NOT 0\t\t" << (!0) << endl;
    cout << "NOT 1\t\t" << (!1) << endl;

    int i = 0;
    cout << ++i << endl;
    cout << --i << endl;

    int b = 0 ;
    int c ;
    c = b++ ;
    cout << c << endl ;
    c = i-- ;
    cout << c << endl;

 int d = 0;
    int f = 0;

    cout << "輸入分數：";
    cin >> d;
    f = d/10;

    switch(f) {
        case 10: //是冒號，除非是比對字元才分號，例如'A'; 。
        case 9:
            cout << "得A" << endl;
            break;
        case 8:
            cout << "得B" << endl;
            break;
        case 7:
            cout << "得C" << endl;
            break;
        case 6:
            cout << "得D" << endl;
            break;
        default:
            cout << "得E(不及格)" << endl;
    }

    for(int j = 1; j < 10; j++) {
        for(int h = 2; h < 10; h++) {
            int tmp = h * j;
            cout << h << "*" << j;
            if(tmp >= 10)
                cout << "=" << tmp;  //多此一舉?
            else
                cout << "= " << tmp; //多此一舉?
                cout << "\t" ;
        }
        cout << endl;
    }

    int k = 0;
    int l = 0;
    int count = -1;
    while(k != -1) {
        count++;
        l += k;
        cout << "輸入分數(-1結束)：";
        cin >> k;
    }

    cout << "平均："  << (double) l / count  << endl;


    int input = 0;
    bool replay = false;
    do {
        cout << "輸入整數值：";
        cin >> input;
        cout << "輸入數為奇數？" << ((input % 2) ? 'Y': 'N') << "\n";
        cout << "繼續(1:繼續 0:結束)？";
        cin >> replay;
    } while(replay); //以分號作結束。

    for(int m = 1; m < 10; m++) {
    if(m == 5)
        break;
    cout << "m= " << m << endl;
    }

    for(int n = 1; n < 10; n++) {
    if(n == 5)
        continue;

    cout << "n = " << n << endl;
    }

    return 0 ;
}
