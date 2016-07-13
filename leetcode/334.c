#include <stdio.h>
char *reverseString(char *s);
int main(int argc, char const *argv[])
{
	char *s;
	s = "hello";
	printf("result :%s\n", s);
	for (; *s; *s ++) {
		char c = *s;
		printf("%c\n",c);
	}
	return 0;
}
char *reverseString(char *s) {

    char *start = s;
    char *left = s;
    char ch;

    while (*s++)                 /* find end of string */
    ;
    s -= 2;

    while (left < s)
    {
            ch = *left;
            *left++ = *s;
            *s-- = ch;
    }

    return(start);

}