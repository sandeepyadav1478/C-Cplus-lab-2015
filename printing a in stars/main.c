#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,l;
    for(i=1;i<=8;i++)
    {
        for(k=8;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
            for(l=8;l>=j;l--)
        {
            printf(" ");
        }
        }
        printf("\n");
    }
    getch();
}
