#include "stdio.h"

//判断是非是素数
// return 1 是 0 不是
int isPrime (int a);
int factoring (int a); //return 商
int main(int argc, char const *argv[])
{
	int m;
	scanf("%d",&m);
	printf("%d=",m);
	if (isPrime(m))
	{
		printf("%d", m);
	}else{
		int rs = m;
		while(!isPrime(rs)){
			rs = factoring(rs);
		}
		printf("%d",rs);
	}

	return 0;
}

int factoring (int a){
	int result;
	for (int i = 2; i < a; ++i)
	{
		if ( a % i == 0)
		{
			result = a/i;
			// printf("%d\n", result);
			printf("%dx", i);
			break;
		}
	}
	return result;
}

int isPrime (int a){
	int prime = 1;
	// int start = 2;
	for (int start = 2; start < a;start++)
	{
		if (a % start == 0)
		{
			prime = 0;
			break;
		}
	}
	// printf("prime:%d\n", prime);
	return prime;
}
