#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    int a[5]={0,1,2,3,4};
    for(i=0;i<6;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",a[j]);
        }
        printf("\n");
    }
    getch();
}
