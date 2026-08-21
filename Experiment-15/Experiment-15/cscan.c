#include <stdio.h>
#include <stdlib.h>

int main()
{
    int req[20], n, head, disk, direction;
    int i, j, seek = 0, temp;

    printf("Enter Number of Requests: ");
    scanf("%d", &n);
    printf("Enter Request Queue:\n");
    for (i = 0; i < n; i++) scanf("%d", &req[i]);

    printf("Enter Initial Head Position: ");
    scanf("%d", &head);
    printf("Enter Disk Size: ");
    scanf("%d", &disk);
    printf("Enter Direction (1=Right, 0=Left): ");
    scanf("%d", &direction);

    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (req[i] > req[j])
            {
                temp = req[i];
                req[i] = req[j];
                req[j] = temp;
            }

    if (direction == 1)
    {
        for (i = 0; i < n; i++)
            if (req[i] >= head) { seek += abs(req[i] - head); head = req[i]; }

        seek += (disk - 1) - head;
        seek += disk - 1;
        head = 0;

        for (i = 0; i < n; i++)
            if (req[i] < head) { seek += abs(req[i] - head); head = req[i]; }
    }
    else
    {
        for (i = n - 1; i >= 0; i--)
            if (req[i] <= head) { seek += abs(req[i] - head); head = req[i]; }

        seek += head;
        seek += disk - 1;
        head = disk - 1;

        for (i = n - 1; i >= 0; i--)
            if (req[i] > head) { seek += abs(req[i] - head); head = req[i]; }
    }

    printf("Total Head Movement = %d\n", seek);
    return 0;
}
