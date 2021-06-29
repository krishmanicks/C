 #include<stdio.h>


// int istriplet(int a[], int n)
// {

// int i,j;
// int k;

//     for(i=0;i<n;i++)
//     {
//        a[i] = a[i]*a[i]; 
//     }

//     for(i=0;i<n;i++)
//     {
//     printf("%d ",a[i]);
//     }
//     printf("\n");

//     for(i=0;i<n;i++)
//     {
//        for(j=i+1;j<n;j++)
//        {
//            for(k=j+1;k<n;k++)
//            {
//               if( a[i]==a[j]+a[k] || a[k]==a[j]+a[i] || a[j]==a[k]+a[k])
//                 return 1;
//             }
//        }
//     }
//     return 0;    
// }


void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int bubble(int a[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                 swap(a[j], a[j+1]);
            }         

        }
    }
}

int istriplet(int a[], int n)
{

int i,j;
int l,r;

    for(i=0;i<n;i++)
    {
       a[i] = a[i]*a[i]; 
    }

    for(i=n-1;i>=2;i--)
    {
        l = 0;
        r = i-1;

        while(l<r)
        {
            if(a[l] + a[r] == a[i])
            {
                return 1;
            }
            (a[l] + a[r] < a[i] ? l++ : r--); 
        }
    }
    return 0;
}

void main()
{
int a[] = {3, 8, 4, 2, 5};
int n = 5;
bubble(a,n);
istriplet(a,n) ? printf("yes"): printf("NO");
}
