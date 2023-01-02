#include<stdio.h>
int main()
{
    long a,b,h,hcf,lcm;
    scanf("%ld%ld",&a,&b);
    for(int i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
        lcm=(a*b)/hcf;
    }
    printf("%d",lcm);
}