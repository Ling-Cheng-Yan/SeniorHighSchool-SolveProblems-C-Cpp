#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            int h1, m1, h2, m2, a;
            cin >> h1 >> m1 >> h2 >> m2 >> a;
            h1 = h1 * 60;
            m1 = m1 + h1;
            h2 = h2 * 60;
            m2 = m2 + h2;
            if((m2 - m1) >= a){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }

        }
    }
    return 0;
}
