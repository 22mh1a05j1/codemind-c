#include<stdio.h>
int main()
{
    int n,rv=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rv=rv*10+r;
        n=n/10;
        
    }
    printf("%d",rv);
}