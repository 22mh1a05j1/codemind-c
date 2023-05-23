#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0)
    {
        int r=n%10;
        int fac=1;
        for(int i=1;i<=r;i++)
        {
            fac=fac*i;
        }
        sum=sum+fac;
        n=n/10;
    }
    if(t==sum)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
}
}