#include "stdio.h"
#include "stdlib.h"

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** flipAndInvertImage(int** A, int ARowSize, int *AColSizes, int** columnSizes, int* returnSize) {
    
    *returnSize = ARowSize;
    int colSize = *AColSizes;
    int **result = (int**)malloc(sizeof(int*)*ARowSize);
    *columnSizes = (int*)malloc(sizeof(int)*ARowSize);
    for(int i = 0;i<ARowSize;i++) {
        int *row = (int*)malloc(sizeof(int) * colSize);
        for(int j = 0; j < colSize; j++)
        {
            int num = A[i][j];
            // 倒置
            num = (num + 1) %2;
            // 反转
            row[colSize-1-j] = num;
        }
        result[i] = row;
        (*columnSizes)[i] = colSize;
    }
    return result;
}

int main(int argc, char const *argv[])
{

    int row = 5;
    int col = 5;
    int **array;
    array = (int **)malloc(row *sizeof(int *));
    for(int i=0;i<row;i++)
        array[i] = (int *)malloc(col *sizeof(int));

    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++)
        array[i][j] = arc4random() %2;
    }
    printf("元数组\n");
    for(size_t i = 0; i < row; i++)
    {
        for(size_t j = 0; j < col; j++)
        {
            printf("%d",array[i][j]);
        }
        printf("\n");
    }


    int *colSize = {0};
    int returnRow = 0;

    
    int **res = flipAndInvertImage(array,row,&col,&colSize,&returnRow);
    printf("转换后数组\n");
    for(size_t i = 0; i < row; i++)
    {
        for(size_t j = 0; j < *colSize; j++)
        {
            printf("%d",res[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}
