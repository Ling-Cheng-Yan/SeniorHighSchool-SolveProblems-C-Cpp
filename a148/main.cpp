#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        int sum = 0;
        double avg;
        for(int i = 0; i < n; i++){
            int score;
            cin >> score;
            sum += score;
        }
        avg = (double)sum / n;
        if(avg > 59.0){
            cout << "no";
        }
        else{
            cout << "yes";
        }
        cout << endl;
    }
    return 0;
}
