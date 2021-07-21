#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int x=0,y=0,j=1,k=1;
    while('!=kbhit()')
    {
        goto(x,y);
        printf("*");
        if(k==1)
        x+=2;
        else
        x-=2;
        if(j==1)
        y+=2;
        else
        y-=2;
        if(x==80)
        k=0;
        if(x==0)
        k=1;
        if(y==40)
        j=0;
        if(y==0)
        j=1;
    }
}
