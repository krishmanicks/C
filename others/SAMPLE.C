// #include <stdio.h>

// int main() 
// {
//     int a[] ={15, 18, 5, 3, 6, 2};
//     int n = 6;                   
//     int i;
//     int max=a[n-1];
//     int b[n];
//     int j = 1;
//     int count=0;
     
//     printf("%d ", max);
//     b[0] = max;

//     for(i=n-2;i>=0;i--)                                      
//         {                                              
//             if(a[i] > max)            
//                 {   
//                    max = a[i];
//                    printf("%d ",max); 
//                    b[j++] = max;
//                    count++;

//                 }  
//         }

//           printf("\n\n");
//         for(i=count;i>=0;i--)
//             {
//                  printf("%d ",b[i]);
//             }        
// } 

// Online C compiler to run C program online
// #include <stdio.h>
// #include<math.h>

// int main() 
// {
//    printf("done\n");
//    int n=6;
//    float sum;
//    int i = 0;
//    float a[] = {44,-3,20.4,6,3.5,-34};
//    while(i<n)
//    {
//        if(a[i] > 0 && (floor(a[i]) ==  a[i]) )
//        {
//        sum += a[i];
//        }
//        i++;
//    }
//    int c = (int)sum;
//    printf("%d",c);
    
//     return 0;
// }

#include<stdio.h>



int main()
{
    char c[] = "a3b14";
    
    for(int i=0;c[i]!='\0';)
    {   
          char alpha = c[i];
          i++;
          int num = 0;

        while((c[i] >= '0' && c[i] <= '9'))
        {
            num = num*10 + (c[i] - '0');
            i++;
        }
        for(int k=0;k<num;k++)
        {
            printf("%c",alpha);
        }
    }
    
    
}


