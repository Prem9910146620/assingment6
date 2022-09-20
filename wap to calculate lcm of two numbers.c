#include<stdio.h>
int main()
{
    int a,b,l;
    printf("enter two number \n");
    scanf(" %d  \n %d",&a,&b);
    l=a>b?a:b;
    for(l;l<=a*b;l=l+(a>b?a:b))
        if(l%a==0&&l%b==0)
        break;
    printf("LCM IS=%d",l);
    return 0;

}
