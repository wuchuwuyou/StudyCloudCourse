#include "stdio.h"

int numJewelsInStones(char* J, char* S) {
	int count = 0;
	char *p = J;
	char *q = S;
	while(*p != '\0'){
		while(*q != '\0') {
			if (*p == *q++)
			{
				count++;
			}
		}
		q = S;
		p++;
	}
	return count;
}

int main(int argc, char const *argv[])
{	
	int num = 0;
	char *a = "abc";
	char *b = "ashasvsabdgasjgjga";
	num = numJewelsInStones(a,b);
	printf("%d\n", num);
	return 0;
}