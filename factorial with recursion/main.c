#include<stdio.h>
#include<conio.h>
int facto(int);
void main()
{
    int fac,x;
    printf("\nEnter a value for factorial: ");
    scanf("%d",&x);
    fac=facto(x);
    printf("\nFactorial of given valuue:%d",fac);
}
int facto(int x)
{
    if(x==0)
    {
        return(1);
    }
    else
    {
        return(x*facto(x-1));
    }
}
