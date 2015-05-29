// 其中R位于报告第一位，共分5级，用1—5数字表示.
// 1---Unreadable
// 2---Barely readable, occasional words distinguishable
// 3---Readable with considerable difficulty
// 4---Readable with practically no difficulty
// 5---Perfectly readable
// 报告第二位是S，共分九个级别，用1—9中的一位数字表示
// 1---Faint signals, barely perceptible
// 2---Very weak signals
// 3---Weak signals
// 4---Fair signals
// 5---Fairly good signals
// 6---Good signals
// 7---Moderately strong signals
// 8---Strong signals
// 9---Extremely strong signals


#include "stdio.h"
int main(int argc, char const *argv[])
{
	int i = 0;
	scanf("%d",&i);
	
	switch(i%10){
		case 1 : printf("Faint signals, barely perceptible, "); break;
		
		case 2 : printf("Very weak signals, "); break;

		case 3 : printf("Weak signals, "); break;

		case 4 : printf("Fair signals, "); break;

		case 5 : printf("Fairly good signals, "); break;

		case 6 : printf("Good signals, "); break;
		
		case 7 : printf("Moderately strong signals, "); break;

		case 8 : printf("Strong signals, "); break;

		case 9 : printf("Extremely strong signals, "); break;
	}

	switch(i/10){
		case 1 : printf("unreadable."); break;
		
		case 2 : printf("barely readable, occasional words distinguishable."); break;

		case 3 : printf("readable with considerable difficulty."); break;

		case 4 : printf("readable with practically no difficulty."); break;

		case 5 : printf("perfectly readable."); break;
	}

	return 0;
}
