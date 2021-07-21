#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    FILE *fp;
    fp=fopen("Desktop\\welcome.txt","r");
    c=fopen(fp);
    while(c!=EOF)
    {
        fprintf("%s",c);
        c=fopen(fp);
    }
    fclose(fp);
    getch();
}
