
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number to calculate sum of cubes of first N natural numbers");
    scanf("%d",&n);
    i=(n*(n+1)/2)*(n*(n+1)/2);
    printf("%d",i);
    return 0;
}
