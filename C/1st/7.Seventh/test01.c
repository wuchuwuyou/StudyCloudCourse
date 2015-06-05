#include "stdio.h"

int main(int argc, char const *argv[])
{
	// char c = ' ';
	// int i = 0;
	// char p[100];
	// int cnt = 0;
	// do{
	// 	scanf("%c",&c);
	// 	i ++;
	// 	p[i] = c;
	// }while(c != '.');
	// printf("i==%d\n",i);
	// printf("p ===%s\n", p);
	// for(int j = 0;j<=i;j++){
	// 	char w = p[j];
	// 	printf("%c\n", w);
	// 	if(w != ' '){
	// 		cnt++;
	// 	}else{
	// 		if (cnt != 0)
	// 		{
	// 			printf("%d ",cnt);
	// 		}
	// 		cnt = 0;
	// 	}
	// }
	// return 0;
	char str[1000];
	gets(str);
		int cnt = 0;
		int i = 0 ;
	for (i = 0; i < strlen(str); ++i)
	{
		char a = str[i];
		if (a == '.')
		{
			printf("%d", cnt);
			break;
		}
		if (a != ' ')
		{
			cnt ++;
		}else{
			printf("%d ",cnt);
			cnt = 0;
		}

	}
	// printf("\n%d\n",i);
}