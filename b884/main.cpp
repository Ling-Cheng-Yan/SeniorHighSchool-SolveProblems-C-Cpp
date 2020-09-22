#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            int x, y, yee;
            cin >> x >> y;
            yee = 100 - (x + y);
            if(0 < yee && yee <= 30){
                cout << "sad!" << endl;
            }
            else if(30 < yee && yee <= 60){
                cout << "hmm~~" << endl;
            }
            else if(60 < yee && yee < 100){
                cout << "Happyyummy" << endl;
            }
            else{
                cout << "evil!!" << endl;
            }
        }
    }
    return 0;
}
