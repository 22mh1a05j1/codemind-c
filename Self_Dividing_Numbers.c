#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        int x=i;
        int dig=0,count=0;
        while(x)
        {
            dig++;
            if((x%10)==0)
            break;
            if(i%(x%10)==0)
            count++;
            x/=10;
        }
    if(dig==count)
      {
        printf("%d ",i);
   }
   }
}
