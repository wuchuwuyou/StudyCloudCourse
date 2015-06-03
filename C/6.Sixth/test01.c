#include "stdio.h"

// 2x6+3x5+12x3+6x+20
// a[幂][幂次的系数]
int main(int argc, char const *argv[])
{
	int cnt = 0;
	int params[10] = {0};

	while(cnt != 2){
		int m,n;
		scanf("%d %d",&m,&n);
		// printf("%d  %d\n", m,n);
		int num = params[m];
		// printf("num == %d\n", num);
		num +=n;
		params[m] = num;

		if (m == 0)
		{
			cnt++;
		}
	}
	for (int i = sizeof(params)/sizeof(params[0]) - 1; i >=0 ; i--)
	{
		if (params[i] == 0)
		{
			continue;
		}

		printf("%d",params[i]);
		if (i != 0)
		{
			printf("x");
		}
		if (i > 1)
		{
			printf("%d",i);

		}
		if (i != 0)
		{
			printf("+");
		}
	}
	printf("\n");
	return 0;
}