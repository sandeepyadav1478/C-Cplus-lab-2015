#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("My.txt","r");
    fclose(fp);
    getch();
}
