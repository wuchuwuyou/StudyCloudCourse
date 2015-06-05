#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a = 1;
	int s = 1;

	int x =0;
	int y =1;

	scanf("%d",&a);
	if (a < 0 || a > 1000000)
	{
		printf("a =%d  error\n",a);
		return 0;
	}
	do{
		if (a%10%2 == s%2)
			x += y;
		y *= 2;
		a /= 10;
		s++;
		printf("%d,%d,%d,%d\n",x,y,a,s);
	}while(a != 0);
	printf("%d\n",x);
	return 0;
}