#include "stdio.h"
#include "string.h"
char* reverseWords(char* s) {
   int len = strlen(s);
   if (len < 2)
   {
   	 return s;
   }
   int start = 0;
   for (int i = 0; i <= len; ++i)
   {
   		if (s[i] == ' ' || s[i] == '\0')
   		{
   			int end = i-1;
   			int size = (start + end) / 2;
   			for (int j = start; j <= size; ++j)
   			{
   				char temp = s[j];
   				s[j] = s[end];
   				s[end] = temp;
   				end = end -1;
   			}
   			start = i + 1;
   		}
   }
   return s;
}

int main(int argc, char const *argv[])
{
	char *p = "Let's take LeetCode contest";
	char *q = reverseWords(p);
	while(*q++ != '\0') {
		printf("%c\n", *q);
	}
	return 0;
}