#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a,b;
	int t;

	scanf("%d %d",&a,&b);
	int m = a;
	int n = b;
	while(b != 0){
		t = a%b;
		a = b;
		b = t;
	}
	printf("%d,%d的最大公约数：%d\n",m,n,a);
	return 0;
}