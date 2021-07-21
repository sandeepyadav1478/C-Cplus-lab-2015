#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    static int a=0;
        for(i=0;i<5;i++)
        {
            for(j=0;j<=i;j++)
            {
                printf("%d ",a++);
            }
            printf("\n");
        }
    getch();
}
