#include<stdio.h>
#include<unistd.h>
int main()
{
    int pid;
    pid = fork();
    printf("\n My Second Project \n");
    if(pid==0)
    {
        excel("/bin/is","-al","/etc",NULL);
        printf("\n Child: After exec()\n");
    }
    else
        printf("Parent process \n");
    return 0;
}
