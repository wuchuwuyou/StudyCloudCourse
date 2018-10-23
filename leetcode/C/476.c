#include "stdio.h"
#include <limits.h>
int findComplement(int num) {
	int count = 0;
	int mask = INT_MAX;
    while (mask & num) mask <<= 1;
    return ~mask & ~num;
}
/*
mask 
1111 1111 
5
0000 0101

1 mask & num 0000 0101
mask 1111 1110
2 mask & num 0000 0100
mask 1111 1100
3 mask & num 0000 0100
mask 1111 1000
4 mask &n num 0000 0000

end mask 1111 1000
~mask 		0000 0111
~num  		1111 1010
& 	  		0000 0010
origin num  0000 0101

*/
int main(int argc, char const *argv[])
{
	int x = findComplement(5);
	printf("%d\n", x);
	return 0;
}
