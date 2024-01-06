#include <stdio.h>

void calculateWaitingTime(int processes[], int n, int bt[], int wt[]) {
    int remaining_burst_time[n];
    for (int i = 0; i < n; i++) {
        remaining_burst_time[i] = bt[i];
    }

    int complete = 0, t = 0, min_burst_time = INT_MAX, shortest = -1, finish_time;

    while (complete != n) {
        for (int i = 0; i < n; i++) {
            if (remaining_burst_time[i] > 0 && remaining_burst_time[i] < min_burst_time && bt[i] <= t) {
                min_burst_time = remaining_burst_time[i];
                shortest = i;
            }
        }

        if (shortest == -1) {
            t++;
            continue;
        }

        remaining_burst_time[shortest]--;

        if (remaining_burst_time[shortest] == 0) {
            complete++;
            finish_time = t + 1;
            wt[shortest] = finish_time - bt[shortest];
            min_burst_time = INT_MAX;
        }

        t++;
    }
}

void calculateTurnaroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

void calculateAverageTimes(int processes[], int n, int bt[]) {
    int wt[n], tat[n];
    int total_wt = 0, total_tat = 0;

    calculateWaitingTime(processes, n, bt, wt);
    calculateTurnaroundTime(processes, n, bt, wt, tat);

    printf("Process\tBurst Time\tWaiting Time\tTurnaround Time\n");

    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        printf("%d\t%d\t\t%d\t\t%d\n", processes[i], bt[i], wt[i], tat[i]);
    }

    double avg_wt = (double)total_wt / n;
    double avg_tat = (double)total_tat / n;

    printf("\nAverage Waiting Time: %.2lf\n", avg_wt);
    printf("Average Turnaround Time: %.2lf\n", avg_tat);
}

int main() {
    int processes[] = {1, 2, 3, 4, 5};
    int n = sizeof(processes) / sizeof(processes[0]);
    int burst_time[] = {10, 4, 8, 5, 2};

    calculateAverageTimes(processes, n, burst_time);

    return 0;
}
