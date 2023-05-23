#include<stdio.h>
int main()
{
    long x;
    scanf("%ld",&x);
    while(x--)
    {
        long n,m,res,j;
        scanf("%ld%ld",&n,&m);
        res=-1;
        for(j=0;j<m;j++)
        {
            if((j*j)%m==n)
            {
                res=j;
                break;
            }
        }
        printf("%ld
",res);
}
}