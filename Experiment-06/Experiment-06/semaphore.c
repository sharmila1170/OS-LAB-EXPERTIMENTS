#include <stdio.h>
#include <windows.h>

HANDLE sem;

DWORD WINAPI child_process(LPVOID arg)
{
    WaitForSingleObject(sem, INFINITE);

    printf("Child Process Entering Critical Section\n");
    Sleep(3000);
    printf("Child Process Leaving Critical Section\n");

    ReleaseSemaphore(sem, 1, NULL);
    return 0;
}

int main()
{
    HANDLE thread;

    sem = CreateSemaphore(NULL, 1, 1, NULL);

    if (sem == NULL)
    {
        printf("Semaphore creation failed\n");
        return 1;
    }

    thread = CreateThread(NULL, 0, child_process, NULL, 0, NULL);

    WaitForSingleObject(sem, INFINITE);

    printf("Parent Process Entering Critical Section\n");
    Sleep(3000);
    printf("Parent Process Leaving Critical Section\n");

    ReleaseSemaphore(sem, 1, NULL);

    WaitForSingleObject(thread, INFINITE);

    CloseHandle(thread);
    CloseHandle(sem);

    return 0;
}
