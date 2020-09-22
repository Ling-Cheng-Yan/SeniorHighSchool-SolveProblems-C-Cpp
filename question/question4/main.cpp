#include <iostream>

using namespace std;

void bubblesort(int arr[],int size)
{
    for(int i = 0; i < size; i++) {
        int flag = 0; //0表示無交換過，1表示有交換過
        for(int j =0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
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
}


int main()
{
    int n;
    while(cin >> n){
        int arr1[1000];
        for(int i = 0; i < n; i++){
            cin >> arr1[i];
        }

        bubblesort(arr1,n);

        for(int k= 0; k < n; k++){
            cout << arr1[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
