#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,get;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    get=(a?b):a,b;
    printf("Greater number is=%d",get)
    return 0;
    getch();
}
