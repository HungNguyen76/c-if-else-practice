#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; ++i) {
        sum += i;
        printf("%d\n", sum);
    }
    printf("sum = %d\n", sum);
    printf("End loop\n");
}