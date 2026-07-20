#include <stdio.h>

int number;

int main(void) {
    for (int i = 300000000; i > 100; i -= 10) {
        int k;

        for (k = 1; k < 21; k++) {
            if (i % k != 0)
                break;
        }

        if (k == 21) {
            number = i;
            break;
        }
    }

    printf("Largest number is: %d\n", number);
    return 0;
}