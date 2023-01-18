#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n==a)
        {
        printf("True");
        break;
        }
        count++;
        c=a+b;
        a=b;
        b=c;
    }
    if(count==n)
    {
        printf("False");
    }
    
}