#include<stdio.h>
int main()
{
    int n,i,n1,n2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int r=0;
        scanf("%d",&n1);
        n2=n1;
        while(n1>0)
        {
            r=r*10+n1%10;
            n1=n1/10;
        }
        if(r==n2)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}
