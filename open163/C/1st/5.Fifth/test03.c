#include "stdio.h"
#include "stdlib.h"
///逆序
int digit(int a);

int main(int argc, char const *argv[])
{
	int m;
	scanf("%d",&m);
	int place = digit(m);
	int sum = 0;
	int i = place;
	while(i >0){
		sum += m / i *(place/i);
		m = m % i;
		i /= 10;
	}
	printf("sum = %d\n",sum);

	return 0;
}

int digit(int a){
	int mask = 1;
	int i = abs(a);
	while (i > 9){
		i /= 10;
		mask *= 10;
	}
	return mask;
}