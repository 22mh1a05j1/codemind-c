#include<stdio.h>
int mega(int);
int main()
{
    int n;
    scanf("%d",&n);
    int count=0,r,c=0;
    if(mega(n))
    {
        while(n!=0)
        {
            r=n%10;
            count++;
            if(mega(r))
            {
                c++;
            }
            n=n/10;
        }
        if(count==c)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}
int mega(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0 ;
}
}