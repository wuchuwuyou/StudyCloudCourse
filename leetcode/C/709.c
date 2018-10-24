#include <stdio.h>
// ascii 65 A  97 a
char* toLowerCase(char* str) {
	if (str == NULL)
	{
		return str;
	}
    char *p = str ;
    while(*p) {
    	if (*p >= 'A' && *p <= 'Z')
    	{
    		/* code */
    		*p += 32;
    	}
    	p++;
    }
    return str;
}


int main(int argc, char const *argv[])
{
	/* code */
	char str1[] = "HelloWORLD";
	char str2[] = "HELLOWORLD";
	char str3[] = "hElLoWoRlD";
	printf("%s\n", toLowerCase(str1));
	printf("%s\n", str1);

	printf("%s\n", toLowerCase(str2));
	printf("%s\n", str2);

	printf("%s\n", toLowerCase(str3));
	printf("%s\n", str3);

	return 0;
}