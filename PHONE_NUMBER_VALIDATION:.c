#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n>1000000000&&n<9999999999)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}