#include "stdio.h"
#include "stdlib.h"

// even 0 odd -1
int numIsEven (int num) {
    if(num%2 != 0){
        return -1;
    }else {
        return 0;
    }
}
/*
    3 1 2 4 
    l     r
    l   r 3
    l r 1 3
    2 l(r)1 3
    2 4 1 3  
*/
int* sortArrayByParity(int* A, int ASize, int* returnSize) {
    int i,l=0,r=ASize-1;
    int *result = (int *)malloc(sizeof(int) * ASize);
    for(i =0; i < ASize;i++){
        if(A[i] % 2 == 0)
            result[l++] = A[i];
        else
            result[r--] = A[i];
    }
    *returnSize = ASize;
    return result;
}

int main(int argc, char const *argv[])
{
    int a[] = {3,1,2,4};
    int *rs = (int*)malloc(sizeof(int) * (1));
    int *p = sortArrayByParity(a,4,rs);
    for(int i = 0;i<*rs;i++) {
        printf("%d\n",p[i]);
    }
    return 0;
}
