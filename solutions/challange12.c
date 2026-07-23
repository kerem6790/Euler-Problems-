// What is the value of the first triangle number to have over five hundred divisors?

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double first = 1;
int index = 1;

int isFiveHundred(int number) {
    int divisor = 0;

    for (int i =1; i <= sqrt(number); i++) {
        if (number % i == 0)
            divisor++;
    }

    return divisor*2;
    
}

int main (void) {
    
    while (isFiveHundred(first) <= 501)
    {
        index++;
        first = first + index;
    }
    


    printf("Cevap: %f \n", first);
    return 0;

}