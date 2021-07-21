#include<stdio.h>
#include<unistd.h>
int main()
{
    int pid;
    pid=fork();
    if(pid==0)
    {
        execl("/bin/is","-al","/etc",NULL);
        printf("Child: After exec()\n");
    }
    else
        printf("Parent process\n");
    return 0;
}
