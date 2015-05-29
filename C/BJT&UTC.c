#include "stdio.h"
int main(int argc, char const *argv[])
{
	int time = 0;
	scanf("%d",&time);
	// printf("您输入的北京时间为%d\n",time);

	int hour = time/100;
	int miuntes = time - hour*100;
	int utcHour = 0;
	if (hour >= 8)
	{
		utcHour = (hour - 8)*100 + miuntes;
	}else{
		utcHour = (hour -8 + 24) *100 + miuntes;
	}
	printf("%d\n", utcHour);
	return 0;
}