#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num[n],i,sum=0;
    
    for(i=0;i<n;i++)
    {
       scanf("%d",&num[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(num[i]%2==0)
        {
            sum=sum+num[i];
        }
    }
    printf("%d",sum);
}