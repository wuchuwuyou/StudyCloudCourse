#include "stdio.h"


void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}
void quick_sort_recursive(int arr[], int start, int end) {
    if (start >= end)
        return;
    int mid = arr[end];
    int left = start, right = end - 1;
    while (left < right) {
        while (arr[left] < mid && left < right)
            left++;
        while (arr[right] >= mid && left < right)
            right--;
        swap(&arr[left], &arr[right]);
    }
    if (arr[left] >= arr[end])
        swap(&arr[left], &arr[end]);
    else
        left++;
    if (left)
        quick_sort_recursive(arr, start, left - 1);
    quick_sort_recursive(arr, left + 1, end);
}
void quick_sort(int arr[], int len) {
    quick_sort_recursive(arr, 0, len - 1);
}


int arrayPairSum(int* nums, int numsSize) {
    quick_sort(nums,numsSize);
    int min = 0;
    for (int i = 0; i < numsSize; i+=2)
    {
    	min += nums[i];
    }
    return min;
}

int main(int argc, char const *argv[])
{
	int a[] = {1,4,3,2};
	int sum = arrayPairSum(a,4);
	printf("%d\n", sum);
	return 0;
}