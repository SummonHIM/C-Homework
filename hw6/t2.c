#include <stdio.h>

int main() {
    int roll = 1;
    float whilesum=0, dosum=0, forsum=0;
    while (roll <= 20) {
        whilesum += (float)roll / (roll + 1);
        roll++;
    }
    printf("whilesum=%f\n", whilesum);

    roll = 1;
    do {
        dosum += (float)roll / (roll + 1);
        roll++;
    } while (roll <= 20);
    printf("dosum=%f\n", dosum);

    for (roll = 1; roll <= 20; roll++) {
        forsum += (float)roll / (roll + 1);
    }
    printf("forsum=%f", forsum);
}