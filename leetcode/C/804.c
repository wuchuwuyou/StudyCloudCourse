#include "stdio.h"


//[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
char* toLowerCase(char* str) {
	if (str == NULL)
	{
		return str;
	}
    char *p = str ;
    char *q = p;
    while(*p) {
    	if (*p >= 'A' && *p <= 'Z')
    	{
    		/* code */
    		*p += 32;
    	}
    	p++;
    }
    return q;
}

int uniqueMorseRepresentations(char** words, int wordsSize) {
    
}

int main(int argc, char const *argv[])
{
	
	return 0;
}