#include <iostream>
#include<stdio.h>
#include<conio.h>
struct student
    {
        char name[20];
        int roll[10];
    }
student s1,s2,s3;
printf("\n Enter name of the student");
scanf("\n %s",s1.name);
printf("\n Enter rollno. of the student:");
scanf("%d",&s1.roll);
printf("\n Enter name of the student");
scanf("\n %s",s2.name);
printf("\n Enter rollno. of the student:");
scanf("%d",&s2.roll);
printf("\n Enter name of the student");
scanf("\n %s",s3.name);
printf("\n Enter rollno. of the student:");
scanf("%d",&s3.roll);
printf("%s\t%d",s1.name,s1.roll);
getch();
