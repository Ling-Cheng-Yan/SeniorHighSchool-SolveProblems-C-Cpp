#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int LENGTH = 5;
    int arr[LENGTH] = {0,1,2,3,4};
    int *ptr = arr;
    int b = 0;
    int *ptr2 = &b;

    for(int i = 0; i < LENGTH; i++)
    {
        printf("&arr[%d]: %p", i,&arr[i]);
        printf("\t\tptr + %d: %p", i, ptr + i);
        printf("\t%d\n", *(ptr + i));
    }

    return 0;
}
