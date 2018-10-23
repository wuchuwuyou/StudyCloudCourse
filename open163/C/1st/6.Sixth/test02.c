#include "stdio.h"
/*
//这个有问题  如果同行同列中数据相同则无法处理
int main(int argc, char const *argv[])
{
	int m = 0;
	scanf("%d",&m);

	int matrix[100][100] = {0};

	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			scanf("%d",&matrix[i][j]);
		}
	}

	int result[100][2] = {0};

	for (int i = 0; i < m; ++i)
	{	
		int max = 0;
		for (int j = 0; j < m; ++j)
		{
			
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
				result[i][0] = i;
				result[i][1] = j;
			}
		}

	}


	for (int i = 0; i < m; ++i)
	{
		int x = result[i][0];
		int y = result[i][1];
		int min = matrix[x][y];
		for (int j = 0; j < m; ++j)
		{
			int tmp = matrix[j][y];
			if (tmp < min) //不是
			{
				result[i][0] = -1;
				result[i][1] = -1;
			}
		}
	}
	for (int i = 0; i < m; ++i)
	{
		int a = result[i][0];
		int b = result[i][1];
		if (a != -1 && b != -1)
		{
			printf("%d %d\n", a,b);
		}else{
			printf("NO");
		}
	}
	return 0;
}*/
//改进后
 int main(int argc, char const *argv[])
 {
 	int matrix[100][100] = {0};
 	int m ;
 	scanf("%d",&m);
 	for (int i = 0; i < m ; ++i)
 	{
 		for (int j = 0; j < m; ++j)
 		{
 			scanf("%d",&matrix[i][j]);
 		}
 	}

 	int count = 0,judge = 1; // judge 判断条件用

 	for (int i = 0; i < m; ++i)  // 行
 	{
 		for (int j = 0; j < m; ++j) //列
 		{
 			judge = 1;
 			//判断行上最大
 			for (int x = 0; x < m; ++x)
 			{
 				if (matrix[i][j] < matrix[i][x])
 				{
 					judge = 0;
 				}
 			}	
 			if(judge == 0) continue;
 			//判断列上最小
 			for (int y = 0; y < m; ++y)
 			{
 				if (matrix[i][j] > matrix[y][j])
 				{
 					judge = 0;
 				}
 			}
 			if (judge == 0) continue;
 			count ++;
            printf("第%d个鞍点：%d，位于第%d行、第%d列\n",count,matrix[i][j],i,j);

 		}
 		
 	}
 	if (count == 0)
 		{
 			printf("NO\n");
 		}
 	return 0;
 }
