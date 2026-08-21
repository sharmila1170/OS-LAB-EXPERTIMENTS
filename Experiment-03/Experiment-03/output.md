# Outputs

## 1. Process Creation using fork()

### Compile

```bash
gcc process.c -o process
./process
```

### Output

```
Process ID = 12345
Process ID = 12346
```

**Note:** The Process IDs will be different every time you run the program.

---

## 2. Process Synchronization using wait()

### Compile

```bash
gcc wait.c -o wait
./wait
```

### Output

```
Child Process
Parent Process
```

---

## 3. File Descriptor Management using close()

### Compile

```bash
gcc close.c -o close
./close
```

### Output

```
File opened successfully.
File closed successfully.
```

## Result

Thus, the UNIX system calls (`fork()`, `wait()`, `getpid()`, and `close()`) were executed successfully and the expected outputs were obtained.
