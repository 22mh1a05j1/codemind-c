#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    int max=a>b ? a:b;
    for(i=max; ; i+=max)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
}
