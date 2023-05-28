#include<stdio.h>
int main()
{
    int r,c,s=0;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat[r][c]);
            s=s+mat[r][c];
        }
    }
    printf("%d",s);
}