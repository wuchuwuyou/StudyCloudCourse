#include <stdio.h>

int maxSubSum(int a[], int n, int *first, int *last);

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	// printf("请输入%d个数\n", n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	printf("%d\n", a[i]);
	// }
	int first = 0;
	int last = 0;
	int sum = maxSubSum(a,n,&first,&last);
	printf("%d %d %d\n",sum,first,last);
	return 0;
}
int maxSubSum(int a[], int n, int *first,int *last) {
	int tempSum = 0,maxSum = 0;
	int i = 0;
	int tmpLast = 0;
	int space = 0;
	for (i = 0; i < n; ++i)
	{
		tempSum += a[i];
		space ++;
		if (tempSum > maxSum)
		{

			tmpLast = i;
			maxSum = tempSum;
		}else if (tempSum < 0)
		{
			space --;
			tempSum = 0;
		}else
			{
		 	space --;
		 }

	}
	*last = a[tmpLast];
	if (maxSum >0)
	{
		*first = a[tmpLast - (space - 1)];
	}else 
		*first = 0;
	return maxSum;
}