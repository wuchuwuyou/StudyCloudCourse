#include <stdio.h>

int maxSubSum(int a[], int n);

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
	int sum = maxSubSum(a,n);
	printf("%d\n",sum);
	return 0;
}
int maxSubSum(int a[], int n) {
	int tempSum = 0,maxSum = 0;
	int i = 0;
	for (i = 0; i < n; ++i)
	{
		tempSum += a[i];
		if (tempSum > maxSum)
		{
			maxSum = tempSum;
		}else if (tempSum < 0)
		{
			tempSum = 0;
		}
	}
	return maxSum;
}