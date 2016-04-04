/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include "stdio.h"
int* twoSum(int* nums, int numsSize, int target) {
    
	if (nums == NULL | numsSize <2)
	{
		return NULL;
	}

    int *a = (int *)malloc(sizeof(int) *2);

    for (int i = 0; i < numsSize; ++i)
    {
    	for (int j = i+1; j < numsSize; ++j)
    	{
    		if (nums[i]+nums[j] == target)
    		{
    			a[0] = i;
    			a[1] = j;
    		}
    	}
    }
    return a;
}