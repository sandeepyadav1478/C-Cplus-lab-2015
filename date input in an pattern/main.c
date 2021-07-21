#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int d[2],m[2],y[4];
    printf("Enter Date of birth: ");
    d[0]=getche();
    d[1]=getche();
    printf("/");
    m[0]=getche();
    m[1]=getche();
    printf("/");
    y[0]=getche();
    y[1]=getche();
    y[2]=getche();
    y[3]=getche();
    printf("\nYou have DOB:%c%c/%c%c/%c%c%c%c",d[0],d[1],m[0],m[1],y[0],y[1],y[2],y[3]);
    getch();
}
