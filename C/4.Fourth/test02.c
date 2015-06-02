#include "stdio.h"
#include "math.h"
#include "stdlib.h"
int main(int argc, char const *argv[])
{
	int i;
	scanf("%d",&i);
	int t = i;
	int cnt = 0;
	int mask = 1;

	if (t < 0)
	{
		printf("fu ");
		t = -t;
	}
	// printf("%d\n",t);
	while(t>9){
		t/=10;
		mask *= 10;
	}

	t = abs(i);
	int tmp;
	while(mask != 0){
		tmp = t / mask;
		t = t % mask;
		mask = mask/10;
		switch(tmp){
			case 0: 
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2: 
				printf("er");
				break;
			case 3:
				printf("san");
				break;
			case 4: 
				printf("si");
				break;
			case 5:
				printf("wu");
				break;
			case 6: 
				printf("liu");
				break;
			case 7:
				printf("qi");
				break;
			case 8: 
				printf("ba");
				break;
			case 9:
				printf("jiu");
				break;
			default:
				break;
		}
		// printf("t == %d tmp == %d  mask == %d \n", t, tmp,mask);
		if (mask != 0)
		{
			printf(" ");
		}
	}
	return 0;
}