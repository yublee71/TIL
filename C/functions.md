# functions

## basic

- open
- close
- read
- write
- malloc
- free
- exit

## Pipex (42 PJT)

- perror
- strerror
- access
- **dup** (system call)

  ```C
  int dup(int fd)
  ```

  - duplicate a file descriptor, returns new fd (-1 on fail)

- **dup2** (system call)
  ```C
  int dup2(int fd1, int fd2);
  ```
  - duplicate the file descripter using fd2 (fd2 ends up pointing to fd1), returns fd2 (-1 on fail)
  - if fd2 was already open, closes fd2 and duplicates
- **exec** (system call)

  - l vs v
    - l: argv is a list, last node is null
    - v: argv is an array, last element is null
  - p vs e
    - p: takes just the name of the program you want to run (e.g., "ls") and an array of arguments. It searches for the executable file in the directories listed in the `PATH` environment variable.
    - e: equires you to specify the exact path to the executable file you want to run, along with an array of arguments.
  - **execve**

    ```C
    int execve(const char *file, char *const argv[], char *const envp[]);

    ```

    - executes a program referred to by path-name
    - return value
      - if succeeds, no return
      - if fails, -1

- **fork**

  ```C
  pid_t fork(void)
  ```

  - create a child process
  - fork is necessary when using exec function because exec function replaces the current process image with a new one.
  - If you call execve() directly without forking, the original process (along with its code and data) would be replaced by the new program, and you would lose the original process context.
  - fork() allows you to create a copy of the current process, and then you can call execve() in the child process to replace it with the desired program while keeping the parent process intact.
  - return value
    - if succeeds, 1) PID of child process to parent process 2) 0 to child process<br>
    - if fails, -1
  - example

    ```C
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
    parent PID : 6860,  x : 1 , return : 6861
    child PID : 6861,  x : 2 , return : 0
    ```

- **pipe**

  ```C
  int pipe(int fd[2]);
  ```

  - create pipe
  - reads from fd[0], writes to fd[1]
  - return value
    - if succeeds 0, if not -1

  ```C
  #include <stdio.h>
  #include <unistd.h>
  #include <string.h>
  #include <errno.h>

  int main(int argc, char *argv[])
  {
  	int fd[2];
  	if (pipe(fd) == -1) {
  		fprintf(stderr, "pipe error: %s\n", strerror(errno));
  		return 1;
  	}
  	//reads from fd[0], writes to fd[1]
  	pid_t pid = fork();
  	if (pid == -1) {
  		fprintf(stderr, "fork error: %s\n", strerror(errno));
  		return 1;
  	}
  	if (pid == 0) { //  child process
  		dup2(fd[1], 1); //standard output points to fd[1], meaning that it redirects the standard output of the current process to the same destination as fd[1].
  		close(fd[0]);
  		int ste = execlp("ps", "ps", "aux", NULL);
  		//output is wrote to
  		if (ste == -1) {
  			fprintf(stderr, "run error: %s\n", strerror(errno));
  			return 1;
  		}
  	}
  	// only parent process reaches here
  	dup2(fd[0], 0);
  	//standard input points to fd[0]
  	close(fd[1]);
  	char line[255];
  	// 표준 입력이 파이프에 연결되어 있으므로 표준 입력에서 읽는다.
  	// fd[0]을 사용해도 된다.
  	while (fgets(line, sizeof(line), stdin) != 0) {
  		printf("%s", line);
  	}
  	return 0;
  }
  ```

- unlink
- wait
