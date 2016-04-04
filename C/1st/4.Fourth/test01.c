#include "stdio.h"

int isPrime(int a);

int main(int argc, char const *argv[])
{
	//两数之间 素数和
	int m,n;
	scanf("%d %d",&m,&n);
	int max = m>n?m:n;
	int min = m>n?n:m;
	int sum = 0;
	int count = 0;
	int i = 2;
	while(count < max) {
		int isOk = isPrime(i);
		if (isOk == 1)
		{
			count++;
			if (count >=min)
			{
				sum +=i;
			}
		}
		i++;
	}

	printf("%d\n",sum);

	return 0;
}
int isPrime(int a) {
	int isPrime = 1 ;
	if (a == 2) return 1;
	for (int i = 2; i < a; i++)
	{
		int n = a%i;
		if (n == 0)
		{
			isPrime = n;
			break;
		}
	}

	if (isPrime == 1)
	{
		return 1;
	}else{
		return -1;

	}
}