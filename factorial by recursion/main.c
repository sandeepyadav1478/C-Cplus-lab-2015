#include<stdio.h>
#include<conio.h>
int facto(int);
void main()
{
    int a,n;
    printf("\nEnter a value for factorial: ");
    scanf("%d",&n);
    a=facto(n);
    printf("\nFactorial of given is:%d",a);
}
int facto(int n)
{
    return(n==0?1:n*facto(n-1));
}
