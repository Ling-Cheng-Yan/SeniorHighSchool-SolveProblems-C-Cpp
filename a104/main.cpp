#include <iostream>

using namespace std;

int main()
{
    int n; //幾個數字要排
    while(cin >> n) {
        int arr[1000];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            //cout << arr[i] << " ";
        }
        //cout << endl;
        for(int i = 0; i < n; i++) {
            int flag = 0; //0表示無交換過，1表示有交換過
            //cout << "i= " << i << " -----" << endl;
            for(int j =0; j < (n - i - 1); j++) {
                //cout << "j=" << j << " arr[j]=" << arr[j] << endl;
                if(arr[j] > arr[j+1]) {
                    //cout << "arr[j] > arr[j+1]" << arr[j] << " vs. " << arr[j+1] << endl;
                    int x = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = x;
                    flag = 1;
                }
            }
            if(flag == 0) {
                break;
            }

        }
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " " ;
        }
        cout << endl;
    }
    return 0;
}
