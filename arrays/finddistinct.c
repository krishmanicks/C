// Given a N x N matrix M. 
// Write a program to find count of all the distinct elements common to 
// all rows of the matrix. Print count of such elements.
#include <stdio.h>

int main() 
{   
   int n = 5;
   int count = 0;
   int b[30];
   int k=0;
   int bsize=0;
   int m[5][5] = {{12, 1, 14, 3, 16},
     {14, 2, 1, 3, 35},
     {14, 1, 14, 3, 11},
     {14, 5, 3, 2, 1},
     {1, 18, 3, 21, 14}};

      for(int i=0;i<n;i++)
     { 
         for(int j=0;j<n;j++)
         {  
             b[k++] = m[i][j];
            bsize++;
        }
     }
     for(int i=0;i<n;i++)
     {
          int  predict = 1;
        for(int j=n;j<bsize;j++)
        {
          if(b[i]==b[j])
          {
              predict++;
            if(j<2*n)
            {
                j = 2*n;
            }
            else if(j>=2*n && j<3*n)
            {
                j=3*n;
            }
            else
            {
                j = n*n;
            }
          }
        }
        if(predict >= n-1)
        {   
            count++;
        }
    }
    printf("\n%d ",count);
}



// int i,j,minus=-1,k=0,count=0;
//           int max=0;
//           for(i=0;i<n;i++)
//           {
//              for(j=0;j<n;j++)
//              {
//                 if(a[i][j]>max)
//                 {
//                    max = a[i][j];
//                  }
//                }
//            }
//             int hash[]=new int[max+1];
//            for(i=0;i<max+1;i++)
//             {
//                hash[i]=0;
//              }

//             for(i=0;i<n;i++)
//              {
//                   for(j=0;j<n;j++)
//                    {
//                      if(hash[a[i][j]]==(minus+1))
//                        {
//                           hash[a[i][j]]=minus;

//                         }

//                    }
//                 minus--;
//                }

//            for(i=0;i<=max;i++)
//             {
//               if(hash[i]==(minus+1))
//                 {
//                    count++;
//                 }
//             }


//      return count;










