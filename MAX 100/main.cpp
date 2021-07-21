#include<stdio.h>
#define MAX 100
int main(void)
{
    #if MAX>99
    printf("\n Compiled for array greater then 99.\n");
    #endif
    return 0;
}
