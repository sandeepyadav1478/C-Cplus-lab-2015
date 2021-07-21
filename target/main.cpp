#include <stdio.h>
#include<conio.h>
int main()
{
    int target,source;
    int *m;
    source=10;
    m=&source;
    target=*m;
    printf("\n %d",target);
    return 0;
}
