#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int sum = 0;
    while(cin >> n >> m){
        int counter = 1;
        for(int i = n; ; i++){
            sum += i;
            //cout << "counter=" << counter << endl << "sum=" << sum << endl;
            if(sum > m){
                break;
            }
            counter++;
        }
        sum = 0;
        cout << counter << endl;
    }
    return 0;
}
