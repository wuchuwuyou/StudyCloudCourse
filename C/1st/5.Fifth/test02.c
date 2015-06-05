#include "stdio.h"
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	if (n>m)	
	{
		int t = n;
		n = m;
		m = t;
	}
	int j,k,sum = 0;
	for(k=n;k<=m;k++)
	{
		sum=0;
		for(j=1;j<k;j++)
			if(k%j==0)
				sum=sum+j;
		if(sum==k)
			printf("%d ",k);
	}
}
