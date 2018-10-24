#include "stdio.h"

int main(int argc, char const *argv[])
{
	FILE *fp = fopen("./Data/0501.txt","r");
	if(NULL==fp) return -1;//要返回错误代码
	char c;
    while(fscanf(fp,"%c",&c)!=EOF) printf("%c",c); //从文本中读入并在控制台打印出来
    fclose(fp);
    printf("\n");
    int count ;
    scanf("%d",&count);
    printf("%d\n", count);
	return 0;
}