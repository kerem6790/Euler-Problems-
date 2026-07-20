// By listing the first six prime numbers: , and , we can see that the th prime is .

// What is the 10001 st prime number?


#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int index = 0;
int k=2;

int isPrime (int number) {
    for(int i=2; i < number; i++ ) {
        if(number % i == 0) 
            return 0;
    }       

    return 1;    
    }


int main (void) {

    while (index != 10001) {
        if (isPrime(k)==1)
            index += 1;
            

        k +=1;
    }
    printf("Cevap: %d", k-1);
    return 0;

}