#include <stdio.h>

int is_pythagorean(int a, int b, int c)
{
    return a * a + b * b == c * c;
}

int main(void)
{
    for (int a = 1; a < 1000; a++) {
        for (int b = a + 1; b < 1000; b++) {
            int c = 1000 - a - b;

            if (b < c && is_pythagorean(a, b, c)) {
                int product = a * b * c;

                printf("a = %d, b = %d, c = %d\n", a, b, c);
                printf("Cevap: %d\n", product);

                return 0;
            }
        }
    }

    printf("Uygun üçlü bulunamadi.\n");
    return 1;
}