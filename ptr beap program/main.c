#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    int *ptr;
    printf("\a Enter a value: \n");
    scanf("%d",&a);
    ptr=&a;
    printf("\aAddress of a is:%d \n",ptr);
    printf("\a Value of *ptr is:%d",*ptr);
    getch();
}
