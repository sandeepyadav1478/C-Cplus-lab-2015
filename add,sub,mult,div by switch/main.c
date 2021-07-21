#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter two values: ");
    scanf("%d%d",&b,&c);
    printf("Enter which you want:\n");
    printf("1.Addition \n2.Subtract \n3.Multiplication \n4.Divide\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("Addition of both:%d",b+c);
        break;
        case 2:
        printf("Subtraction of both:%d",a-b);
        break;
        case 3:
        printf("Multipication of both:%d",a*b);
        break;
        case 4:
        printf("Dividation of both:%d",a/b);
        break;
        default:
        printf("You enter wrong value");
    }
    getch();
}
