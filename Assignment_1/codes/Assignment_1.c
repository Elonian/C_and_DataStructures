#include <unistd.h>
#include <stdio.h>

int main()
{
    int i;
    for(i=0; i<10; i++){
        if(i%2==0){
            fork();
            // printf("Parent Process ID = [%d], child process ID = [%d], i value =%d\n", 
            //         getppid(), getpid(), i); // These ID's will be used to draw the tree structure  
        }
    }
    sleep(1);
}