#include <iostream>

using namespace std;

int main(){
    int x, y;
    for(int i=0; i<81; i++){
        x = (i/9)+1;
        y = (i%9)+1;
        cout << x << "*" << y << "=" << x*y << endl ;
    }
    return 0;
}
