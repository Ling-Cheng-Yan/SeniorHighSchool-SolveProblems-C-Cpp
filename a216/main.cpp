#include <iostream>

using namespace std;

long int f(int n){
    int sum = 0;
    if(n == 1){
        return 1;
    }
    else{
        for(int i = 1; i < n; i++){
            sum += i;
        }
        return sum + n;

    }
}

long int g(int n){
    if(n == 1){
        return 1;
    }
    else{
        return f(n) + g(n-1);

    }
}

int main()
{
    int n;
    while(cin >> n){
        cout << f(n) << " " << g(n) << endl;
    }
    return 0;
}
