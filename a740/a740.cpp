#include<iostream>
#include<cmath>
using namespace std;

long long in1,in2;

int main()
{
	//輸入數字 
	while(cin>>in1)
	{
		
		
		long long i,sum=0;
		
		//找質數記得先用根號再下去做不然太慢 
		for(i=2;i<=sqrt(in1);i++)
		{
			
			//判斷 i 是否為該數的質因數並相加 
			while(in1%i==0)
			{
				in1/=i;
				sum+=i;
			}
		}
		
		//輸出 
		if(in1==1)
		{
			cout<<sum<<endl;
		}
		else
		{
			cout<<sum+in1<<endl;
		}
		
	}
	return 0;
}