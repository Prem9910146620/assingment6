#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number to print in reverse=");
    scanf("%d",&n);

    for(n;n>0;n=n/10)
    {
        i=n%10;
        printf("%d",i);
    }





    return 0;
}
