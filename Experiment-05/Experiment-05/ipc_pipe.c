#include <stdio.h>

int main()
{
    FILE *pipe;
    char buffer[100];

    pipe = _popen("echo Hello from Child Process", "r");

    if (pipe == NULL)
    {
        printf("Pipe creation failed\n");
        return 1;
    }

    fgets(buffer, sizeof(buffer), pipe);
    printf("Message received from child: %s", buffer);

    _pclose(pipe);
    return 0;
}
