#include <stdio.h>
int main()
{
    int pages[50], frames[10];
    int n, f, i, j, k, pos, farthest, next, found, fault = 0;

    printf("Enter Number of Pages: ");
    scanf("%d", &n);
    printf("Enter Reference String:\n");
    for (i = 0; i < n; i++) scanf("%d", &pages[i]);
    printf("Enter Number of Frames: ");
    scanf("%d", &f);

    for (i = 0; i < f; i++) frames[i] = -1;

    for (i = 0; i < n; i++)
    {
        found = 0;
        for (j = 0; j < f; j++)
            if (frames[j] == pages[i]) found = 1;

        if (found) continue;

        pos = -1;
        for (j = 0; j < f; j++)
            if (frames[j] == -1) { pos = j; break; }

        if (pos == -1)
        {
            farthest = -1;
            for (j = 0; j < f; j++)
            {
                next = n + 1;
                for (k = i + 1; k < n; k++)
                    if (frames[j] == pages[k]) { next = k; break; }

                if (next > farthest)
                {
                    farthest = next;
                    pos = j;
                }
            }
        }

        frames[pos] = pages[i];
        fault++;
    }

    printf("Total Page Faults = %d\n", fault);
    return 0;
}
