#include<stdio.h>
#include<conio.h>
void main()
{
    int i,r;
    int sum=0;
    while(sum!=13)
    {
        i=1;
        sum=sum+i;
        while(sum>=3)
        {
            sum=sum+sum;
        }
    }
    printf("%d\t",sum);
    getch();
}
