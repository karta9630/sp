#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    if (fork() == 0)
    { 
            if (fork() == 0)
            { 
                while (1)
                {
                    /* code */
                printf("%-5d: mary!\n", getpid());
                sleep(1);
                }
                
            }
            else
            {
                while (1)
                {
                    
                printf("----------------\n");
                sleep(1);
                }
                
            }
    }
    else {
        while(1){
     printf("%-5d: George\n", getpid());
        sleep(1);
        }
    }
}

/*
George
*/