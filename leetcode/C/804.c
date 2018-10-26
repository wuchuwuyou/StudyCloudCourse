#include "stdio.h"
#include "stdlib.h"
#include "string.h"
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
	char result[100][100] = {""};
	char flag[100];
	for(size_t i = 0; i < wordsSize; i++) {
		char *p = (words)[i];

		size_t len = strlen(p);
		char *ms =  (char*)malloc(sizeof(char) * (12*len));
		char *st = ms;
		// printf("%s\n",p);
		while(*p) {
			int interval = *p - 'a';
			char *key = wordsList[interval];
			while(*key) {
				*ms++ = *key++;
			}
			p++;
		}
		*ms = '\0'; 
		strcpy(result[i],st);
		flag[i] = 1;
		// result[i] = ms;
		printf("st:%s\n",st);
		free(st);
	}
	
	for(size_t i = 0; i < wordsSize; i++)
	{
		char *p = result[wordsSize];
		printf("%s\n",p);
	}
	
	for(size_t i = 0; i < wordsSize; i++)
	{
		if (flag[i] == 1) {
			for(size_t j = i+1; j < wordsSize; j++)
			{
				
				if (strcmp(result[i],result[j]) == 0) {
					flag[j] = 0;
					printf("相同的 ：%s\n%s\n",result[i],result[j]);
				}
				
			}
		}
		
	}
	int count = 0;
	for(int i = 0; i < wordsSize; i++){
		if(flag[i] == 1) {
			count++;
		}
	}
  	return count;
}

int main(int argc, char const *argv[])
{
	char *words[5] = {"vtpke","vngc","vnqr","gbzx","qvdx"};
	printf("%d\n",uniqueMorseRepresentations(words,4));
	/*
	"gin" -> "--...-."
	"zen" -> "--...-."
	"gig" -> "--...--."
	"msg" -> "--...--."
	*/

	return 0;
}