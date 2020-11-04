#include <iostream>
using namespace std;

int main ()
{
	int in1,in2;
	
	while(cin>>in1>>in2)
	{ 
		if(in1==in2)
		{
			cout<<in2<<endl;
		}
		else
		{
			cout<<in2+1<<endl;
		}
	}
	return 0;
}