#include "stdio.h"
int main(int argc, char const *argv[])
{
	int i = 0;
	scanf("%d",&i);
	i = i/100+i/10%10*10+i%10*100;
	printf("%d \n",i);
	return 0;
}
