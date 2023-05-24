#include<stdio.h>
int main()
{
    int n;
    float avg,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
            sum=sum+a[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
}