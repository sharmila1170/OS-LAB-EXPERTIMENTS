# Outputs

## 1. First Come First Serve (FCFS)

### Compile

```bash
gcc fcfs.c -o fcfs
./fcfs
```

### Sample Output

```
Enter the number of processes: 3

Enter Burst Time:
P1: 24
P2: 3
P3: 3

Process    Burst Time    Waiting Time    Turnaround Time
P1         24            0               24
P2         3             24              27
P3         3             27              30

Average Waiting Time = 17.00
Average Turnaround Time = 27.00
```

---

## 2. Shortest Job First (SJF)

### Compile

```bash
gcc sjf.c -o sjf
./sjf
```

### Sample Output

```
Enter the number of processes: 3

Enter Burst Time:
P1: 6
P2: 8
P3: 7

Process    Burst Time    Waiting Time    Turnaround Time
P1         6             0               6
P3         7             6               13
P2         8             13              21

Average Waiting Time = 6.33
Average Turnaround Time = 13.33
```

---

## 3. Priority Scheduling

### Compile

```bash
gcc priority.c -o priority
./priority
```

### Sample Output

```
Enter the number of processes: 3

Process    Priority
P1         2
P2         1
P3         3

Execution Order:
P2 -> P1 -> P3

Average Waiting Time = 3.00
Average Turnaround Time = 8.00
```

---

## 4. Round Robin Scheduling

### Compile

```bash
gcc round_robin.c -o rr
./rr
```

### Sample Output

```
Enter the number of processes: 3

Enter Time Quantum: 2

Process    Burst Time    Waiting Time    Turnaround Time
P1         5             6               11
P2         4             4               8
P3         2             4               6

Average Waiting Time = 4.67
Average Turnaround Time = 8.33
```

---

## Result

Thus, the CPU Scheduling Algorithms (FCFS, SJF, Priority Scheduling, and Round Robin Scheduling) were implemented successfully, and the waiting time and turnaround time were calculated.
