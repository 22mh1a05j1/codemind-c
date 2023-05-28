#include<stdio.h>
int main()
{
    int r,c,max1=0,max2=0;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        int s=0;
        for(int j=0;j<c;j++)
        {
            s=s+mat[i][j];
        }
        if(s>max1)
        {
            max1=s;
        }
    }
    for(int i=0;i<c;i++)
    {
        int s=0;
        for(int j=0;j<r;j++)
        {
            s=s+mat[j][i];
        }
        if(s>max2)
        {
            max2=s;
        }
    }
    if(max1>max2)
    {
        printf("%d",max1);
    }
    else
    {
        printf("%d",max2);
    }
}