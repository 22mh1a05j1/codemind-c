#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    float s=0.0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    float abg=s/n;
    printf("%.2f",abg);
}