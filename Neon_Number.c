#include<stdio.h>
int main()
{
    int a,r,sum=0;
    scanf("%d",&a);
    int sq=a*a;
    while(sq!=0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(sum==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}
