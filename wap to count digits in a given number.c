
#include<stdio.h>
int main()
{
     int n,c=0;
     printf("enter the n number to count digits in a given number=");
     scanf("%d",&n);

     for(n;n>0;n=n/10)
     {   c++;
         if(n<=9)
        printf(" \n %d digits",c);

     }





     return 0;
}
