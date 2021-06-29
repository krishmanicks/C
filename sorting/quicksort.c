
#include <stdio.h>

void swap(int a[], int i ,int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

int partition(int a[],int l, int h)
{
    int pivot = a[h];
    int i = l -1;
    int end = h;

    for(int j = l; j <= h - 1; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a, i, j);
        }
    }
    swap(a, i + 1, h);
    return (i + 1);
}


void quicksort(int a[], int l, int h)
{   
    if(l<h)
    {
        int loc = partition(a,l,h);
        quicksort(a,l,loc-1);
        quicksort(a,loc+1,h);
    }
    
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


int main() 
{
  
   int a[] = {5,9,3,5,34,58,12,99,0,2,4,11,7};
  int n = 13;
  int l=0;
  int h = n-1;
  
  quicksort(a,l,h);
  printArray(a,n);  
    return 0;
}