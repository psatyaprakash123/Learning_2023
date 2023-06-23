#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};
struct Time Difference(struct Time t1, struct Time t2) {
    struct Time diff;

    int totalSec1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSec2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSec = totalSec2 - totalSec1;

    diff.hours = diffSec / 3600;
    diff.minutes = (diffSec % 3600) / 60;
    diff.seconds = (diffSec % 3600) % 60;

    return diff;
}
int main() {
    struct Time start, end, diff;

    printf("Enter the start time like hours minutes seconds");
    scanf("%d %d %d", &start.hours, &start.minutes, &start.seconds);

    printf("Enter the end time like hours minutes seconds");
    scanf("%d %d %d", &end.hours, &end.minutes, &end.seconds);

    diff = Difference(start, end);

    printf("The difference between the two time periods is: %d hours %d minutes %d seconds\n",
           diff.hours, diff.minutes, diff.seconds);

    return 0;
}

