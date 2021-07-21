#include<stdio.h>
#include<conio.h>
int pow(int,int);
void main()
{
    int a,n,b;
    printf("\nEnter a number for pow: ");
    scanf("%d",&a);
    printf("\nEnter how many power you want: ");
    scanf("%d",&b);
    n=pow(a,b);
    printf("\nPower of given value is:%d",n);
}
int pow(int x,int y)
{
    if(y==0)
    {
        return(1);
    }
    else
    {
        return(x*pow(x,y-1));
    }
}
