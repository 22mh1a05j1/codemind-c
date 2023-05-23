#include<stdio.h>
int main()
{
    int n,s=0,pro=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        pro=pro*r;
        s=s+r;
        n=n/10;
    }
    printf("%d",pro-s);
}