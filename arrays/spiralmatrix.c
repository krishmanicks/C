
// int main()
// {

//    int n;
//    printf("Enter the value:");
//    scanf("%d\n",&n);
//    int i,j;
//    int row=n*2-1;
//    int column=n*2-1;
//    int a[row][column];
  

//    int top=0,left=0;
//    int bottom=sizeof(a)/sizeof(a[0])-1;
//    int right=sizeof(a)/sizeof(a[0])-1;
   
//     int count=n;
 
   
//     while(1)
//     {
//         if(left>right)
//         {
//             break;
//         }

//         for(i=left;i<=right;i++)
//         {
//              a[top][i]=count;
//         }
//         top++;

//         if(top>bottom)
//         {
//            break;
//         }

//        for(i=top;i<=bottom;i++)
//        {
//           a[i][right]=count;
//          }
//         right--;
    
//         if(left>right)
//         {
//            break;
//          }

//          for(i=right;i>=left;i--)
//         {
//           a[bottom][i]=count;
//          }
//          bottom--;

//         if(top>bottom)
//        {
//           break;
//         }

//         for(i=bottom;i>=top;i--)
//        {
//            a[i][left]=count;
//         }
//          left++;
    

//        count--;
//     }

   
//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<column;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }

// }


#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int r=3,c=4;    
    int a[3][4] =   {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    };
         
        int top = 0,left = 0;
     //   int direction = 0;
     int down =r-1;
     int right=c-1;
     int i;

    while(1)
    {
        if(left>right)
        {
            break;
        }
            for(i=left;i<=right;i++)
            {
                printf("%d ",a[top][i]);
                
            }
            top++;

         if(top>down)
        {
           break;
        } 
            for(i=top;i<=down;i++)
            {
                printf("%d ",a[i][right]);
            }
            right--;

       if(left>right)
        {
           break;
         } 
            for(i=right;i>=left;i--)
            {
                printf("%d ",a[down][i]);
            }
            down--;

        if(top>down)
        {
           break;
        }      
  
            for(i=down;i>=top;i--)
            {
                printf("%d ",a[i][left]);
            }
            left++;

    } 

}
