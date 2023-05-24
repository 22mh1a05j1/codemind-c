#include<stdio.h>
int main()
{
    int n,sum=0,avg,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c++;
        sum=sum+a[i];
    }
    avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            printf("True");
            c=c-1;
            break;
        }
    }
    if(c==n)
    {
        printf("False");
    }
    
}