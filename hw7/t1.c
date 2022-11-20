#include <stdio.h>

main() {
    int a = 0, i;
    for (i = 1; i < 100; i += 2) {
        a += i - (i + 2);
    }
    printf("a=%d", a);
}