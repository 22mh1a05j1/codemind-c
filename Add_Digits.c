#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    int t=s,rem,sum=0,r2,s2=0;
    if(s>9)
    {
        while(s>0)
        {
            rem=s%10;
            sum=sum+rem;
            s=s/10;
        }
        int temp=sum;
        if(sum<10)
        {
            printf("%d",sum);
        }
        else
        {
            while(sum>0)
            {
            r2=sum%10;
            s2=s2+r2;
            sum=sum/10;
            }
            printf("%d",s2);
        }
        
    }
    else
    {
        printf("%d",s);
    }
}
