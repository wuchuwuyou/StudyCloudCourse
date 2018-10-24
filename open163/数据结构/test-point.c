#include "stdio.h"
void test(int *p);
int main(int argc, char const *argv[])
{
	int a[] = {100,100,100};
	int *p;
	p = a;
	test(p);
	for (int i = 0; i < (sizeof(a)/sizeof(int)); ++i)
	{
			printf("%d ",a[i]);

	}
	return 0;
}
void test(int *p) {
	*p =200;
	*(++p) = 300;
	*(++p) = 400;
}