// Which starting number, under one million, produces the longest chain?

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

long long longest;
long long templongest = 1;
int chosen_i;

int widhtOfCollatz(long long number) {
    int tempcount = 0;
    
    while (number != 1) {
        if (number % 2 == 0)
            number /= 2;

        else 
            number = 3*number +1;

        tempcount++;
    }

    return tempcount;


}

int main (void) {
    
    for (int i=1; i <1000001; i++) {
        templongest = widhtOfCollatz(i);
        if (templongest > longest) {
            longest = templongest;
            chosen_i = i;
        }
    }


    printf("Cevap: %d \n", chosen_i);
    return 0;

}