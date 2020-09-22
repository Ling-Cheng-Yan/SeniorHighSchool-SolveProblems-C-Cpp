#include <iostream>

using namespace std;

int main(){
    int n, a1,a2,a3,a4,d,r;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a1 >> a2 >> a3 >> a4 ;
        d=a2-a1 ;
        r=a2/a1 ;
        if(a1+2*d==a3 && a1+3*d==a4){
            cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a1+4*d << endl;
        }
        else if(a1*r*r==a3 && a1*r*r*r==a4){
            cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a1*r*r*r*r << endl;

        }
    }
    return 0;
}
