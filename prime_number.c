#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            j++;
            
        }
    }
    if(j==2)
    {
        printf("prime");
    }
    else
    {
       printf("not a prime");
}
}