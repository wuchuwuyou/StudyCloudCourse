#include "stdio.h"
#include "stdlib.h"

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParityII(int* A, int ASize, int* returnSize) {
    *returnSize = ASize;
    int *result = (int *)malloc(sizeof(int) * ASize);
    int evenIndex = 0;
    int oddIndex = 1;
    for(size_t i = 0; i < ASize; i++)
    {
       if (A[i] %2 == 0) {
           result[evenIndex] = A[i];
           evenIndex += 2;
       }else {
            result[oddIndex] = A[i];
            oddIndex += 2;
       }
    }
    return result;
}
// [1,1,2,4,5,6]
// [4,2,5,7]
//  4  5 