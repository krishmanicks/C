#include<stdio.h>

int merge(int a, int b)
{
    int length = 0;
    int temp = b;
    while(b)
    {
        length++;
        b = b/10;
    }
    while(length)
    {
        a = a*10;
        length--;
    }
    return (a + temp);
}

int main()
{
    int n = 8;
    int arr[] = {1, 34, 3, 98, 9, 76, 45, 4};
    int i=0,j=1;

    for(i=0;i<n-1;i++)
    { 
       for(int j=i+1;j<n;j++)
       {
          if(merge(arr[i],arr[j])  < merge(arr[j],arr[i]))
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
       }
    }

    for(i=0;i<n;i++)
    {
        printf("%d", arr[i]);
    }   
}