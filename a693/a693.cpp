#include<iostream>
using namespace std;

int n,m;

int main()
{
	//輸入有幾筆測資 
	while(cin>>n>>m)
	{
		
		int l,r;
		int food[n+1]={0};
		
		//因為一個一個加太慢了 所以直接先把全部加好 
		for(int i =1;i<=n;i++)
		{
			cin>>food[i];
			food[i]+=food[i-1];
		}
		
		//因為已經加好了，所以全部扣掉前面不吃的就是答案 
		while(m--)
		{
			cin>>l>>r;
            cout<<food[r]-food[l-1]<<endl;
		}
	}
	return 0;
}