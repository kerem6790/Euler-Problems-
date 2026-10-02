 /* means       .

For example,        ,
and the sum of the digits in the number  is        .

Find the sum of the digits in the number . */
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 

int digits[200] = {1};
int length = 1;
int sum = 0;


void multiply(int digits[200], int *length, int multiplier) {
    int carry = 0;
    int old_length = *length;

    for (int i = 0; i < old_length; i++)
    {
        digits[i] *= multiplier;
        digits[i] += carry;
        carry = 0;

        if (digits[i]>9)
        {
            if (i == old_length-1)
            {
                if (digits[i] < 100)
                {
                    (*length)++;
                    digits[i+1] = digits[i]/10;
                    digits[i] = digits[i] % 10;
                }

                else {
                    *length = *length + 2;
                    digits[i+2] = digits[i]/100;
                    digits[i+1] = (digits[i]/10) % 10;
                    digits[i] = digits[i] % 10;
                }
                

            }

            else {
                carry = digits[i] / 10;
                digits[i] = digits[i] % 10;
            }
            
        }
        
    }
    

}


int main(void) {

    for (int i = 2; i < 101; i++)
    {
        multiply(digits, &length, i);
        
    }
    
    for (int i = 0; i < length; i++)
    {
        sum += digits[i];
    }
    
    printf("Cevap: %d \n", sum);

    return 0;
}
