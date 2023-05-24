#include<stdio.h>
int main()
{
    int n,max=0,c=0;
    scanf("%d",&n);
    int i=0;
    int a[100];
    while(n!=0)
    {
        int r=n%10;
        a[i]=r;
        i++;
        c++;
        n=n/10;
    }
    for(int i=0;i<c;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
}

