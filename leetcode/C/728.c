/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i =0;
    int * result=(int*)malloc(sizeof(int)*(right-left+1));
    for(i=left;i<=right;i++) {
    	int t = i;
    	bool flag = true;
        while (t && flag) {
        	int r = t %10;
            if(r == 0 || i % r ){
                flag = false;
            }
            t /= 10;
        }
        if (flag) {
        	result[(*returnSize) ++] = i;
        }
    }
    return result;
}

