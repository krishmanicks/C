#include<stdio.h>

int main()
{
    int nums[] = {2,5,7,3,0,9,4};
    int min = nums[0];
    int index;
    int n =sizeof(nums)/sizeof(nums[0]);

    for(int i=1;i<n;i++)
    {
        if(min>nums[i])
        {
            min= nums[i];
            index = i;
        }
    }
    printf("the min number is %d and index is %d",min, index);
}