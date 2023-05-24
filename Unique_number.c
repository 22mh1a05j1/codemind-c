#include<stdio.h>
int main()
{
    int n,c=0,r;
    scanf("%d",&n);
    int i=0;
    int a[100];
    while(n!=0)
    {
        r=n%10;
        a[i]=r;
        c++;
        i++;
        n=n/10;
    }
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i]==a[j]&& i!=j)
            {
                printf("Not Unique Number");
                return 0;
            }
        }
    }
    printf("Unique Number");
}