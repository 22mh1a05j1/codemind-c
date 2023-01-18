#include<stdio.h>
int main()
{
    int n,r,rv=0;
    scanf("%d",&n);
    while(n>0)
    {
    
        r=n%10;
        rv=rv*10+r;
        n=n/10;
}
            printf("%d",rv);
        }
    
