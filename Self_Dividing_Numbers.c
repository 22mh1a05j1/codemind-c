#include<stdio.h>
int self(int i)
{
    int c=0,r,r1,cnt=0;
    int t=i;
    while(i!=0)
    {
        r=i%10;
        c++;
        if(r>0)
        {
            if(t%r==0)
            {
                cnt++;
            }
        }
        i=i/10;
    }
    if(c==cnt)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a,b,q;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
}