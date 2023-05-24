#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    int a=n*n;
    while(a!=0)
    {
        r=a%10;
        s=s+r;
        a=a/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}