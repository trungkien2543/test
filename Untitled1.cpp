#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[8],key,i;
	for(i=1;i<=4;i++)
	cin>>a[i];
	for(int j=2;j<=4;j++)
	{
		key=a[j];
		i=j-1;
		while (i>0  and a[i]>key)
		
		{
			a[i+1]=a[i];
			i=i-1;
				
	    }
	    a[i+1]=key;
	
	}
		for(i=1;i<=4;i++)
	cout<<a[i]<<" ";
}
