#include<stdio.h>
int prime(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int x,f,b,d1,d2;
        scanf("%d",&x);
        for(int i=x;;i++)
        {
            if(prime(i))
            {
                f=i;
                break;
            }
        }
        for(int i=x;;i--)
        {
            if(prime(i))
            {
                b=i;
                break;
            }
        }
        d1=f-x;
        d2=x-b;
        if(d1>=d2)
        {
            printf("%d
",b);
        }
        else if(d2>d1)
        {
            printf("%d
",f);
    }
    }
}
int prime(int n)
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
        return 0;

        
    }
}