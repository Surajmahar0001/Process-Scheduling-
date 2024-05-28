#include<stdio.h>

struct process
{
    int AT, BT, CT, TA, WT;
};

int main()
{
    struct process p1, p2, p3;
    int AWT;

    printf("\nEnter the burst time of process1, process2 and process3: ");
    scanf("%d %d %d", &p1.BT, &p2.BT, &p3.BT);

    p1.AT = 0;
    p2.AT = 0;
    p3.AT = 0;

    p1.CT = p1.BT;
    p2.CT = p1.CT + p2.BT;
    p3.CT = p2.CT + p3.BT;

    p1.TA = p1.CT - p1.AT;
    p2.TA = p2.CT - p2.AT;
    p3.TA = p3.CT - p3.AT;

    p1.WT = p1.TA - p1.BT;
    p2.WT = p2.TA - p2.BT;
    p3.WT = p3.TA - p3.BT;

    AWT = (p1.WT + p2.WT + p3.WT) / 3;

    printf("\nAverage waiting time of FCFS is %d Millisecond\n", AWT);

    return 0;
}
