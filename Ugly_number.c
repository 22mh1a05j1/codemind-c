#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else if(n%3==0)
        {
          n=n/3;  
        }
        else if(n%4==0)
        {
            n=n/4;
        }
        else
        {
            break;
        }
    }
    if(n==1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
}
}