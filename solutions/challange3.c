// What is the largest prime factor of the number 600851475143?

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int largest; 
int i=2;
long number = 600851475143;
int main (void) {

    while (number!=1) {
        if (number % i == 0)
            number = number / i;

        i++;
    }


    printf("Toplam: %i", i-1);
    return 0;

}