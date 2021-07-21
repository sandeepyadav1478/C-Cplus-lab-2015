#include <stdio.h>
int main()
{
    char sex,ms;
    int age;
    printf("Enter age,sex,marital status \n");
    scanf("%d%c%c",&age,&sex,&ms);
    if((ms=='M')||(ms=='U'&&sex=='M&&age>30')||(ms=='U'&&sex=='F'&&age>25))
    printf("Drive is insured\n");
    else
    printf("Drive is not insured\n");
    return 0;
}
