#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;

	do{
		scanf("%d",&c);
		if (c%2 == 0)
		{
			a++;
		}else{
			b++;
		}
	}while(c != -1);
	printf("%d %d\n",b-1 ,a);
	return 0;
}