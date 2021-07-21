#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k;
    int a[5]={1,0,1,0,1};
    int b[5]={0,1,0,1,0};
    for(i=0;i<=5;i++)
    {
    if(i%2!=0)
    {
        for(j=0;j<i;j++)
        {
            printf("%d",b[j]);
        }
    }
    else
    {
        for(k=0;k<i;k++)
        {
            printf("%d",a[k]);
        }
    }
    printf("\n");
    }
    getch();
}
