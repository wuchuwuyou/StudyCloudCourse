#include "stdio.h"

int main(int argc, char const *argv[])
{
	int a,b;
	input:scanf("%d/%d",&a,&b);
	if (a >=b ||b>=100||a<10)
	{
		printf("请重新输入有效分数\n");
		goto input;
	}
	int m = a;
	int result[200] ;
	int i = 0;
	while(m != 0 && i < 200){
		m *= 10;
		result[i] = m / b;
		m = m % b;
		i++;
	}
	printf("0.");
	for (int j = 0; j < i; ++j)
	{
		printf("%d", result[j]);
	}
	printf("\n");
	return 0;
}