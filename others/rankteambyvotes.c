#include<stdio.h>

void rankteams(char arr[][3], int n)
{
    int hash[26] = {0};
    for(int i=0;i<5;i++)
    {   
        int pos = 0;
        for(int j=0;j<3;j++)
        {       
            pos++;
            hash[arr[i][j] - 'A']+=pos;
            //printf("%c ",arr[i][j]);
        }
        printf("\n");
    }

    char sort[10000];
    int k=0;
    for(int i=0;i<26;i++)
    {   
        if(hash[i] !=0)
        {   
            //printf("%d %c\n",hash[i],i+'A');
            sort[hash[i]]++;
            printf("%d ",sort[hash[i]]);
        }
    }

     for(int i=0;i<26;i++)
    {   
        if(sort[i] !=0)
        {   
            printf("%d ",hash[sort[i]]);
            //sort[hash[i]]++;
        }
    }

}

int main()
{
    char arr[5][3] = {"ABC","ACB","ABC","ACB","ACB"};
                                        
    int voters = 5;
    
    rankteams(arr, voters);
}