#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5]={1,2,3,4,5};
    int i,n;
    printf("\n Enter the position:");
    scanf("%d",&i);
    printf("\n Enter the value:");
    scanf("%d",&n);
    if(i>5)
    {
        printf("\n Enter value is not in range.");
    }
    else
    {
        printf("\n Enter value in range of array.");
    }
}
