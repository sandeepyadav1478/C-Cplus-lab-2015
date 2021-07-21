#include <stdio.h>
int main()
{
    int isqrd,i;
    char c;
    printf("\n Enter a number: ");
    scanf("%d",&i);
    isqrd= i>0 ? i*i : -(i*i);
    printf("\n %d squared is %d",i,isqrd);
    return 0;
}
