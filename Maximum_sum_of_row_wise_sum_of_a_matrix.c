#include<stdio.h>
int main()
{
    int r,c,cnt=0;
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
        if(s>cnt)
        {
            cnt=s;
        }
    }
    printf("%d",cnt);
}