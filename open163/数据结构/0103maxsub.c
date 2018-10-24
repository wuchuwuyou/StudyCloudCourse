#include "stdio.h"

int maxSubSum (int a[],int n) {
	int maxSum = 0;
	int thisSum = 0;
	int i = 0;
	int len = 0;
	int end = 0;
	for (int i = 0; i < n; ++i)
	{
		thisSum += a[i];
		if (thisSum > maxSum){
			len ++;
			maxSum = thisSum;
			end = i;
		}else if (thisSum < 0) {
			thisSum = 0;
			// end	 = i;
			// len = 0;
		}
	}
	printf("%d %d %d\n",maxSum,end-(len)+1,end);
	return maxSum;
}

int main(int argc, char const *argv[])
{
 
 	// int a[] = {-1,7,1,3,-5,6,-1,-2,-3,-2,10,5};
 	// int sum = maxSubSum(a,12);
 	// printf("%d\n",sum);
 	int num;
 	scanf("%d",&num);
 	int a[num];
 	for (int i = 0; i < num; ++i)
 	{
 		scanf("%d",&a[i]);
 	}
 	int sum = maxSubSum(a,num);
 	printf("%d",sum);
	return 0;
}