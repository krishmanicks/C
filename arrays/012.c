#include<stdio.h>

int swap( int arr[], int low, int high) 
{           
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
}

int sort012(int a[], int n)
{
    int low,med,high;
    
    low=0,med=0,high=n-1;
    int temp = 0;
    
    while(med<=high)
    {   
        if(a[med]==0)
        {
    
          swap(a, low, med);
            med++;;
            low++;      
        }
        else if(a[med]==1)
        {
            med++;
           
        }
        else
        {
            swap(a,med, high);
            high--;            
        }
    }
    
}

int main()
{
    int arr[] = {2,1,2,1,0,0,2,0,1,2,0,2,1};
    int n = 13;

    sort012(arr,n);

    for(int i =0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }    
return 0;
}



/*
#include<stdio.h>

int swap( int arr[], int start, int end) 
{
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
}

int sort012(int arr[], int n)
{
    int low,med,high,temp;
    
    low=0,med=0,high=n-1;
    
    while(med<=high)
    {
       switch (arr[med])
       {
                   case 0: {
                      swap(arr, low, med); 
                      low++;
                      med++;
                      break;
                  }
 
                   case 1:
                      med++;
                      break;
 
                   case 2: {
                      swap(arr, med, high); 
                      high--;
                      break;
                }
        }
    }
    return arr;
}

int main()
{
    int arr[] = {2,1,2,1,0,0,2,0,1,2,0,2,1};
    int n = 13;

    sort012(arr,n);

    for(int i =0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }    
return 0;
}
*/