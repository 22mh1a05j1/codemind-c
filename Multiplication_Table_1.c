#include<stdio.h>
int main()
{
    int a,b=12,i,j;
    scanf("%d",&a);
    for(i=1;i<=b;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}