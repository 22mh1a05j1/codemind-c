#include<stdio.h>
int main()
{
    int n,r,pr=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i*(i+1)==n)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
