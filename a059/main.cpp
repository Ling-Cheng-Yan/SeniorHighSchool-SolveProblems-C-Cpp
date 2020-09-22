#include <iostream>
#include <cmath>

using namespace std;

int sqrtsum(int x, int y)
{
    int sum = 0;
    for(int i = x; i <= y; i++){
        sum += i * i;
   }
   return sum;

}
int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int a, b;
        cin >> a >> b;
        cout << "Case" <<" " << i+1 << ": " << sqrtsum(ceil(sqrt(a)), sqrt(b)) << endl;
    }

    return 0;
}
