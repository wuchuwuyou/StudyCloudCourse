#include <stdio.h>


int singleNumber (int* nums,int size)
{
	int a =0,b=0;
	for (int i = 0; i < size; ++i)
	{
		int x = nums[i];
		printf("x = %d a = %d b = %d\n", x,a,b);
		b = (b^x)& ~a;
		a = (a^x)& ~b;
		printf("x = %d a = %d b = %d\n", x,a,b);
	}
	return b;
}

int singleNumber1(int* nums,int size)
{
	int a = 0;
	for (int i = 0; i < size; ++i)
	{
		int x = nums[i];
		a = a ^ x;
	}
	return a;
}

int main()
{
	// int p[] = {0,1,0,1,0,1,99};
	// int res = singleNumber(p,7);
	int p[] = {2,3,3,2,1,3,2};
	int res = singleNumber(p,7);
	int a[] = {2,3,5,3,1,1,2};
	int res1 = singleNumber1(a,7);
	printf("%d\n", res);
	printf("%d\n", res1);
}