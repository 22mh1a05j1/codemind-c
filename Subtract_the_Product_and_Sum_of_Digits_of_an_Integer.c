#include<stdio.h>
int main()
{
    int n,r,pro=1,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        pro=pro*r;
        s=s+r;
        n=n/10;
    }
    printf("%d",pro-s);
}