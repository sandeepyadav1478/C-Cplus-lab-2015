#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int length,i;
    char ch[20];
    printf("Enter string: ");
    scanf("%s",ch);
    length=strlen(ch);
    for(i=0;i<strlen(ch);i++)
    {
        ch[i]=toupper(ch[i]);
    }
    printf("After concat upper case string:%s",ch);
    getch();
}
