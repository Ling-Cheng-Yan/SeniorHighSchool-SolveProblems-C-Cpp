#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

// 0000 0000 0000 0000 0000 0000 0000 0001
// 0000 0000 0000 0000 0000 0000 0000 0010
// 0000 0000 0000 0000 0000 0000 0000 0100


int main()
{
    int n;
    while(scanf("%d", &n) ){
        if(n == (1 << (int)log2(n))){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
