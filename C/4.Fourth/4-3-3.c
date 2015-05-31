#include "stdio.h"

int main(int argc, char const *argv[])
{
	int x;
	scanf("%d",&x);

	// int t;
	// do{
	// 	int d = x%10;
	// 	t = t*10+d;
	// 	x /= 10;
	// }while(x>0);
	// printf("t = %d \n", t);
	// x = t;
	// do {
	// 	int d = x%10;
	// 	printf("%d", d);
	// 	if (x >= 10)
	// 	{
	// 		printf(" ");
	// 	}
	// 	x /= 10;
	// }while (x > 0);
	int mask =  1;
	int t = x;
	int cnt = 0;
	while(t>9){
		t/=10;
		mask *= 10;
	}

	printf("x = %d ,mask = %d\n",x,mask);

	do {
		int d = x / mask;
		printf("%d", d);
		if (mask > 9)
		{
			printf(" ");
		}
		x %= mask;
		mask /= 10;

	}while(mask > 0);



	return 0;
}