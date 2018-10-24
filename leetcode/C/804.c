#include "stdio.h"
#include "stdlib.h"

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
    char wordsList[26][12] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	
	for(size_t i = 0; i < wordsSize; i++) {
		char *p = (words)[i];


		// printf("%s\n",p);
		while(*p) {
			char *ms =  (char*)malloc(sizeof(char) * 12);
			char *q = ms;
			int interval = *p - 'a';
			char *key = wordsList[interval];
			while(*key) {
				*ms++ = *key++;
			}
			printf("ms:%s\n",q);
		}
		printf("p:%s\n",p);
		printf("q:%s\n",q);
		printf("ms:%s\n",ms);
	}
}

int main(int argc, char const *argv[])
{
	char *words[4] = {"gin", "zen", "gig", "msg"};
	uniqueMorseRepresentations(words,4);
	/*
	"gin" -> "--...-."
	"zen" -> "--...-."
	"gig" -> "--...--."
	"msg" -> "--...--."
	*/
	return 0;
}