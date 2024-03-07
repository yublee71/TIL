# main function

## command line arguments

- `char *envp[]`

  - optional
  - the variables set in the user's environment
  - The following example shows how to see environment variables = `export`

    ```
    #include <stdio.h>

    int main(int argc, char *argv[], char *envp[])
    {
        int	i = 1;

    	while (argc && argv && *envp)
    	{
    		printf("%d: %s\n", i++, *envp++);
    		}
    }
    ```

[reference]

- https://learn.microsoft.com/en-us/cpp/cpp/main-function-command-line-args?view=msvc-170
  https://blog.naver.com/ruvendix/220865596108 - example of envp (kr)
