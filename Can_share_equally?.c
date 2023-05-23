#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==0)
    {
        if(y%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        if(x%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}