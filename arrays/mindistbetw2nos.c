#include<stdio.h>
#include<limits.h>


int misDist(int arr[], int n, int x, int y)
{
        int index1=0,index2=0;
        int min = INT_MAX;
        int count = 0;
        int flag = 0,flag2=0;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i] == x)
            {
                flag2 =1;
                index1 = i;
                if(flag ==1 )
                {
                    count = index1 - index2;
                }
            }
           if(arr[i] == y)
            {
                flag = 1;
                index2 = i;
                if(flag2 ==1 )
                {
                    count = index2 - index1;
                }
            }
        if(flag == 1 && flag2 == 1  && count <= min)
        {
            min = count;
        }
                
        }
         if(flag == 1 && flag2 == 1)
        {
            return min;
        }
        return -1;
    }

int main()
{
    int a[] = {1,2,3,2};
    int n = 4;
    int x = 1;
    int y = 2;
    printf("%d",misDist(a,n,x,y));
}