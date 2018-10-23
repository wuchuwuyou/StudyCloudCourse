#include "stdio.h"
#include <stdlib.h>
#include <limits.h>
int reverse(int x);
int main(int argc, char const *argv[])
{
	int a = 0;
	scanf("%d",&a );
	int b = reverse(a);
	printf("\n%d",b);
	return 0;
}
int reverse(int x) {
	int minus = 1;
	if(x == 0){
		return 0;
	} 
	if (x<0)
	{
		minus = -1;
	}
	int num = x *minus;
	int result = 0;
	while(num > 9) {
		if (result > (INT_MAX - num%10)/10)
		{
			return 0;
		}
		result += num % 10;
		num = num / 10;
		result *= 10;
	}
	result += num;
	result = result * minus;
	return result;
}