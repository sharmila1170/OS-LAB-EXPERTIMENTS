#include <stdio.h>
#include <windows.h>

DWORD WINAPI thread_function(LPVOID arg)
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("Thread Executing : %d\n", i);
        Sleep(1000);
    }

    return 0;
}

int main()
{
    HANDLE t1, t2;

    t1 = CreateThread(NULL, 0, thread_function, NULL, 0, NULL);
    t2 = CreateThread(NULL, 0, thread_function, NULL, 0, NULL);

    WaitForSingleObject(t1, INFINITE);
    WaitForSingleObject(t2, INFINITE);

    printf("All Threads Completed\n");

    CloseHandle(t1);
    CloseHandle(t2);

    return 0;
}
