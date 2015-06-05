#include "stdio.h"
int main(int argc, char const *argv[])
{
	int x;
	scanf("%d",&x);
	int i;

	int isPrime = 1 ;
	for (int i = 2; i < x; i++)
	{
		int n = x%i;
		if (n == 0)
		{
			isPrime = n;
			break;
		}
	}

	if (isPrime == 1)
	{
		printf("%d 是素数\n",x);
	}else{
		printf("%d 不是素数\n",x);

	}

	return 0;
}