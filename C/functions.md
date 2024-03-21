# functions

## Pipex

- open
- close
- read
- write
- malloc
- free
- perror
- strerror
- access
- dup
- dup2
- execve
- exit
- **fork**

  - create a child process
  - return value\
     if succeeds, 1. PID of child process to parent process, 2. 0 to child process<br>
    if fails, -1
  - example

    ```
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/types.h>
    int main()
    {
    	pid_t pid;
    	int x;
    	x = 0;
    	pid = fork();

    	if (pid > 0) //parent process
    	{
    		x = 1;
    		printf("parent PID : %ld, x : %d , return : %d\n",(long)getpid(), x, pid);
    	}
    	else if (pid == 0) //child process
    	{
    		x = 2;
    		printf("child PID : %ld, x : %d , return : %d\n",(long)getpid(), x, pid);
    	}
    	else //if fails
    	{
    		printf("fork Fail! \n");
    		return -1;
    	}
    	return 0;
    }
    ```

    ```
    parent PID : 46834,  x : 1 , return : 46838
    child PID : 46838,  x : 2 , return : 0
    ```

- **pipe**
- unlink
- wait
