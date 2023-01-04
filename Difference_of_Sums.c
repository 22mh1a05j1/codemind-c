#include<stdio.h>
int main()
{
    int n,sum1=0,sum2=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum2=sum2+i;
        sum1=sum1+i*i;
    }
    int sq=sum2*sum2;
    printf("%d",sq-sum1);
}