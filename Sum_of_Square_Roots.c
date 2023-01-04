#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sq,s=0.0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sq=sqrt(i);
        s=s+sq;
        
    }
    printf("%0.2f",s);
}