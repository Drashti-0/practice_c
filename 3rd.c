/*#include <stdio.h>

int main()
{

    int a[4] = {1, 2, 3, 4};

    int sum[4];
    sum[0] = a[0];
    for (int i = 1; i < 4; i++)
    {

        sum[i] = sum[i - 1] + a[i];
    }
    printf("[");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ,", sum[i]);
    }
    printf("]");
}
    */


    #include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    
    int* sum = (int*)malloc(numsSize * sizeof(int));
    
    sum[0] = nums[0];
    
    for(int i = 1; i < numsSize; i++){
        sum[i] = sum[i-1] + nums[i];
    }
    
    *returnSize = numsSize;
    
    return sum;
}
