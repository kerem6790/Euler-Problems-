 /* Let  be defined as the sum of proper divisors of  (numbers less than  which divide evenly into ).
If   and  , where  , then  and  are an amicable pair and each of  and  are called amicable numbers.

For example, the proper divisors of  are  and ; therefore  . The proper divisors of  are  and ; so  .

Evaluate the sum of all the amicable numbers under . */
#include <stdlib.h>
#include <stdio.h>
#include <math.h> 


int result = 0;

int amicableResult(int number) {
    int sum = 0;

    if (number == 1||number == 0 )
    {
        return 0;
    }
    

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum+=i;
        }
        
    }
    
    return sum;
    
}


int main(void) {

    for (int i = 1; i < 10000; i++)
    
    {
        int pair = amicableResult(i);
        if (pair != i && amicableResult(pair) == i)
        {
            result += i;
        }
        
    }
    
    
    printf("Cevap: %d \n", result);

    return 0;
}
