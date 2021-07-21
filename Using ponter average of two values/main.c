#include<stdio.h>
#include<conio.h>
void main()
{
    int *p,*q;
    int a,b,c;
    p=&a;
    q=&b;
    printf("Enter value of a and b: ");
    scanf("%d%d",&a,&b);
    c=(*p+*q)/2;
    printf("\nAvrage of a and b is:%d",c);
    getch();
}
