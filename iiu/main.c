#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enetr three numbers \n");
scanf("%d%d%d",&a,&b,&c);
if((a>b) && (a>c))
{
    printf("%d is greatest",a);
}
if((c>a) && (c>b))
{
    printf("%d is greatest",c);
}
else
{
    printf("%d is greatest",b);
}
getch();
return 0;
}
