#include "stdio.h"
int addDigits(int num) {
    
    int sum = 0;
    int cs = 0;
    while (num >=10) {
     do {
    	cs = num/10;
    	sum += num%10;
    	num = num/10;
   	 }while(cs != 0);
   	 num = sum;
   	 sum =0;
    }
   return num;
}
// 参考： https://en.wikipedia.org/wiki/Digital_root
int addDigits1(int num) {
	return (num -1)%9 +1;
}
int main(int argc, char const *argv[])
{
	int a =	addDigits(12345);
	int b = addDigits1(12345);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
