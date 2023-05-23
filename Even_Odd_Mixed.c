#include<stdio.h>
int main()
{
    int a,fc=0,c=0,count=0,r;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        fc++;
        if(r%2==0)
        {
            c++;
        }
        else
        {
            count++;
        }
        a=a/10;
    }
    if(c==fc)
    {
        printf("Even");
    }
    else if(count==fc)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}
