#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 1 2
// 3 4

/// xy 不为0
/// xz  在X行 找Z最大值
/// yz 在Y行找Z最大值
int max(int a,int b) {
    return a>b?a:b;
}
int sumIntArray(int *a,int num) {
    int sum = 0;
    for(size_t i = 0; i < num; i++)
    {
        sum += a[i];
    }
    return sum;
}
int projectionArea(int** grid, int gridRowSize, int *gridColSizes) {
    int sum = 0;
    int *row = malloc(gridRowSize *sizeof(int));
    memset(row,0,gridRowSize);
    for(size_t i = 0; i < gridRowSize; i++)
    {
        int *col = malloc(gridColSizes[i]* sizeof(int));
        memset(col,0,gridColSizes[i]);
        for(size_t j = 0; j < gridColSizes[i]; j++)
        {

            if(grid[i][j] > 0) sum++;
            row[i] = max(row[i],grid[i][j]);
            col[j] = max(col[j],grid[i][j]);
        }
        sum += sumIntArray(col,gridColSizes[i]);
        free(col);
    }
    sum += sumIntArray(row,gridRowSize);
    free(row);
    return sum;
}

int main(int argc, char const *argv[])
{
    int arr[2][2] = {{1,2},{3,4}};
    int col[2] = {2,2};
    int max = projectionArea((int **)arr,2,(int *)col);
    return 0;
}
