#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=a[0];
    for(int i=1;i<n;i++)
    {
        x=x^a[i];
    }
    printf("%d",x);
}