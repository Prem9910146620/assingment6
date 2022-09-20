
#include<stdio.h>
int main()
{
    int i,n,j,d=1;
    printf("enter the n number to calculate factorial of a number=");
    scanf("%d",&n);

    for(n;n>=1;n--)
      { j=n;
      d=d*j;
     if(n==1)
        printf("%d",d);

      }

    return 0;
}
