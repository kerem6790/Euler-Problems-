// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int result;
double sumOfSqaures, SquareOfSums;


int main (void) {
    for(int i =1; i<101; i++ ) {
        sumOfSqaures += pow(i,2);
        SquareOfSums += i;
    }
    SquareOfSums *= SquareOfSums;

    result = SquareOfSums - sumOfSqaures;
    printf("Cevap: %d", result);
    return 0;

}