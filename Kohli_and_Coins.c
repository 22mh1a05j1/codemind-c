#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%5!=0 &&x%10!=0)
    {
        printf("%d",-1);
    }
    else
    {
        printf("%d",x/10+(x%10)/5);
    }
}