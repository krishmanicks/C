#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans = a ^ b;
    int count = 0;
    printf("%d\n",ans);

    while(ans!=0)
    {
        if(ans%2 ==1)
            count++;
        ans = ans/2;
    }

    printf("%d",count);
}