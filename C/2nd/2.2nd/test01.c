#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int deleteSubStr(const char *str,const char *subStr,char *resultStr);
void partitionStr(const char *str,char separator,char *source,char *sub);
int main(int argc, char const *argv[])
{
	// char *str = "absjdsglkasjdsjkgj";
	// char *sub = "sjds";
	char str[160];
	char sub[80];
	int c;
	char result[80] = "";
	int i= 0,j=0;
	while((c = getchar())!= '\n'){
		str[i++] = c;
		if (c == ' ')
		{
			j = i-1;
		}
	}
	char *source = (char *)malloc(sizeof(char)*j);
	partitionStr(str,' ',source,sub);
	printf("str = %s\n",source);
	printf("sub = %s\n",sub);
	deleteSubStr(source,sub,result); 
	printf("%s\n", result);
	free(source);
	return 0;
}
void partitionStr(const char *str,char separator,char *source,char *sub){
	char *p = strchr(str,separator);
	p++;
	// printf("%s\n",p);
	// printf("chazhi==%d\n",p-str);
	int t = (int)((p - str)/sizeof(char));
	strncpy(source,str,t);
	// p++;
	// printf("%s\n", p);
	strcpy(sub,p);
}
int deleteSubStr(const char *str,const char *subStr,char *resultStr){
	int count = 0;
	//TODO: 待添加替换字符
	return count;
}