#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(i%2!=0)
        {
        printf("%d x %d = %d
",a,i,a*i);
        }
    }
}