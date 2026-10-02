// What is the sum of the digits of the number 2^1000?

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int sum1 = 0;
int sum;

int power_digit_sum(int power)
{
    int digits[1000] = {1};
    size_t length = 1;
    int carry;
 
    for (int i = 0; i < power; i++) {

        for (size_t j = 0; j < length; j++) {
            digits[j] = digits[j] * 2;
        }

        carry = 0;

        for (size_t j = 0; j < length - 1; j++) {

            if (digits[j] > 9) {
                carry =  digits[j] / 10 ;
                digits[j] = digits[j] % 10;
                digits[j + 1] += carry;
            }
        }
        if (digits[length - 1] > 9) {
            digits[length] = digits[length - 1] / 10;
            digits[length - 1] =digits[length-1] % 10;
            length++;
            }
    }

    for (size_t z = 0; z < length; z++) {
        sum1 += digits[z];
    }
    return sum1;
}


int main(void) {

    sum1 = power_digit_sum(1000);

    printf("Cevap: %d\n", sum1);

    return 0;
}
    