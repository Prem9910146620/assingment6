#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number to calculate sum of squares of first N natural numbers=");
    scanf("%d",&n);
    i=n*(n+1)*(2*n+1)/6;
    printf("%d",i);
    return 0;
}
