// Find the sum of all the primes below two million.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long long sum = 2;

int isPrime(int number) {
    if (number < 2)
        return 0;
    
    if (number % 2 == 0 && number != 2)
        return 0;

    for (int i=3; i <= sqrt(number); i += 2 ) {
        if (number % i == 0)
            return 0; }

    return 1;
    
    
}

int main (void) {
    for (int k = 3; k < 2000000; k+=2) {    
        if (isPrime(k)==1)
            sum += k;
    }
    printf("Cevap: %lld", sum);
    return 0;

}