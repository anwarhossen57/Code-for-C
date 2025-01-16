#include <stdio.h>

int main() {
    int ages[] = {12, 21, 22, 23, 16};

    float avg, sum = 0;
    int i;

    int length = sizeof(ages) / sizeof(ages[0]);

    for (i = 0; i< length; i++) {
        sum += ages[i];
    }
    avg = sum / length;

    printf("The average age is : %.2f", avg);
    return 0;
}