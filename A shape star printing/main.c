#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    printf("        *\n");
    for(i=1;i<8;i++)
    {
        for(j=8;j>i;j--)
        {
            printf(" ");
        }
        if(i==4)
        {
            printf("*****\n");
        }
        else
        {
            printf("*");
            for(k=1;k<=i;k++)
            {
                printf(" ");
            }
            printf("*\n");

        }
    }
    getch();
}
