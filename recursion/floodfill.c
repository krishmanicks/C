
#include <stdio.h>

 void dfs(int image[3][3],int sr,int sc,int newColor,int rows,int cols,int source)
    {
        if(sr<0 || sr>=rows || sc<0 || sc>=cols)
            return;
        else if(image[sr][sc] != source)
            return;
        
        image[sr][sc] = newColor;
        
        dfs(image, sr-1, sc, newColor, rows, cols, source);
        dfs(image, sr+1, sc, newColor, rows, cols, source);
        dfs(image, sr, sc-1, newColor, rows, cols, source);
        dfs(image, sr, sc+1, newColor, rows, cols, source);
    }
    
void floodfill(int image[3][3], int sr, int sc, int newColor) 
    {
        if(newColor == image[sr][sc])
        {
            return ;
        }
        int rows = 3;
        int cols = 3;
        int source = image[sr][sc];
        dfs(image,sr,sc,newColor,rows,cols,source);
    }
    
void print(int arr[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
      {
        printf("%d ", arr[i][j]);
      }
      printf("\n");
    }
}

int main() 
{
    int matrix[3][3] = {
                        {1,1,1},
                        {1,1,0},
                        {1,0,1}
                                };
    int sc = 1;
    int sr = 1;
    int newColor = 2;
    
    floodfill(matrix,sr, sc,newColor);
    print(matrix);
    
    return 0;
}