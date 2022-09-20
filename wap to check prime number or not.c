
#include<stdio.h>
int main()
{
    int a=2,d,c;
    printf("enter the number to check prime or not=");
    scanf("%d",&c);
    for(a;a<=c-1;a++)
    { d=c%a;
    if(d==0)
    break;
    }
    if(d==0)
        printf("not prime");
    else
        printf("prime");




    return 0;
}
