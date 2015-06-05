//UTC -BJT
#include "stdio.h"

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d",&t);
	int a = t / 100;
	int b = t % 100;
	if (a < 8)
	{
		a += 24;
	}
	a = a - 8;

	printf("%d\n", a*100+b);
	return 0;
}