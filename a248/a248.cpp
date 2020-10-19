#include<iostream>
using namespace std;
int main()
{
    int a, b, n, p, r, f[10000];

    while(cin>>a >>b>>n)
    {
        p=a/b;
        r=a%b;
        cout<<p<<".";

        for(int i=1; i<=n; i++)
        {
            f[i]=r*10/b;
            r=r*10%b;
            cout<<f[i];
        }
        cout << endl;





    }
   
    return 0;

}
