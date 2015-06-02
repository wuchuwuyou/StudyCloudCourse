#include "stdio.h"

int main(int argc, char const *argv[])
{
	//两数之间 素数和
	int m,n;
	scanf("%d %d",&m,&n);
	int max = m>n?m:n;
	int min = m>n?n:m;
	int sum = 0;
	for (int i = min; i <= max; i++)
	{
		//素数
		int isOk = 1;
		for (int j = 2; j < i; j++)
		{
			if ( i % j == 0)
			{
				isOk = 0;
				break;
			}
		}
		if (isOk)
		{
			sum += i;
			// printf("%d\n", i);
		}
	}

	printf("sum = %d\n",sum);

	return 0;
}