#include <stdio.h>
int main() {
    int ages[] = {23, 43, 12, 18};
    int i;
    int length = sizeof(ages) / sizeof(ages[0]);

    int lowestAge = ages[0];
    for (i = 0; i< length; i++){
        if (lowestAge > ages[i]){
            lowestAge = ages[i];
        }
    }
    printf("The lowest age in the array is : %d", lowestAge);
    return 0;
}