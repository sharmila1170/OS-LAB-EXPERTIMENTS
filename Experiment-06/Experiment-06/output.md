# Output

```text
Parent Process Entering Critical Section
Parent Process Leaving Critical Section
Child Process Entering Critical Section
Child Process Leaving Critical Section
```

The order of parent/child sections can vary because they execute concurrently.

Compile:

```powershell
gcc semaphore.c -o semaphore
.\semaphore
```
