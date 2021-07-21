#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=2    0;i++)
    {
        for(k=20;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
    getch();
}
