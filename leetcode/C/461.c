#include "stdio.h"
#include "math.h"
int hammingDistance(int x, int y) {
	if (x<0 || y<0)
	{
		return 0;
	}
	if (y > pow(2,32) || x > pow(2,32))
	{
		return 0;
	}
	int count = 0;
	while(!(y==0 && x==0)) {
		if ((x&1) != (y&1))
		{
			count ++;
		}
		x>>=1;
		y>>=1;
	}
	return count;
}

int main(int argc, char const *argv[])
{
	int x = hammingDistance(3,1);
	printf("%d\n", x);
	return 0;
}