// #include<stdio.h>

// int main()
// {
//     int n;
//     int last;
//     int reversed=0;
 
//     printf("enter an integer:");
//     scanf("%d",&n);
//        int num = n;
//     while(n!=0)
//     {
//         last = n%10;
//         reversed = reversed * 10 + last;
//         n= n/10;
//     }
//     printf("the reversed no. is: %d",reversed);

//     if(reversed==num)
//     {
//         printf("\nthe value is palindrome");
//     }
//         else
//         {
//             printf("\nnot a palindrome");
//         }
    
// }

// Online C compiler to run C program online
#include <stdio.h>

int main() {
  
   char a[] = "string";
   int n=6; 
   int i=0;
   int j = n-1;
   while(i<=j)
   {
       int temp = a[i];
       a[i++] = a[j];
       a[j--] = temp;
       
   }
   
   for(i=0;i<n;i++)
   {
       printf("%c ",a[i]);
   }
    
    return 0;
}

