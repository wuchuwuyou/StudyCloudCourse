#include "stdio.h"

int main(int argc, char const *argv[])
{
	int i;
	int j;
	double sum = 0.0;
	scanf("%d",&j);
	for (int i = 1; i <= j; i++)
	{
		sum += 1.0/i;
	}
	printf("f(%d) = %f\n",j,sum);
	return 0;
}