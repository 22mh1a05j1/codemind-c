
#include<stdio.h>
int power(int a,int b)
{
    int pr=1;
    for(int i=1;i<=b;i++)
    {
        pr=pr*a;
    }
    return pr;
}
int main()
{
    int n,s=0;
    scanf("%d",&n);
    int a[n];
    int t=n-1;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i]*(power(2,t));
        t--;
    }
    printf("%d",s);
}