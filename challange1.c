// If we list all the natural numbers below  that are multiples of  or , we get  and . The sum of these multiples is .
// Find the sum of all the multiples of 3 or 5 below 1000.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int sum; 

int main (void) {
    for (int i=2; i<1000; i++ ) {
        if (i%3 == 0)
            sum +=i;
        if (i%5 ==0 & i%3 != 0)
            sum +=i;    
    };

    printf("Toplam: %i", sum);
    return 0;

}