#include<stdio.h>
int main()
{
    int r,c,max=0;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<c;i++)
    {
        int s=0;
        for(int j=0;j<r;j++)
        {
                s+=mat[j][i];
        }
        if(s>max)
    {
        max=s;
    }
    }
    printf("%d",max);
}