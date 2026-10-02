// If the numbers  to  are written out in words: one, two, three, four, five, then there are       letters used in total.

// If all the numbers from  to  (one thousand) inclusive were written out in words, how many letters would be used?

// NOTE: Do not count spaces or hyphens. For example,  (three hundred and forty-two) contains  letters and  (one hundred and fifteen) contains  letters. The use of "and" when writing out numbers is in compliance with British usage.



// What is the sum of the digits of the number 2^1000?

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int returnLetterToTen(int number)
{
 switch (number)
 {
      case 0: return 0;
      case 1: return 3; break;
      case 2: return 3; break;
      case 3: return 5; break;
      case 4: return 4; break;
      case 5: return 4; break;
      case 6: return 3; break;
      case 7: return 5; break;
      case 8: return 5; break;
      case 9: return 4; break;
      case 10: return 3; break;
      case 11: return 6; break;
      case 12: return 6; break;
      case 13: return 8; break;
      case 14: return 8; break;
      case 15: return 7; break;
      case 16: return 7; break;
      case 17: return 9; break;
      case 18: return 8; break;
      case 19: return 8; break;


    default:
        printf("Must be between 1-19");
        return 0;
 }       
}

int returnLetterTo100(int number) {

    if (number < 20)
        return returnLetterToTen(number);

    if (number >= 20 && number < 30)
      return returnLetterToTen(number % 10) + 6;

    if (number >= 30 && number < 40)
        return returnLetterToTen(number % 10) + 6;

    if (number >= 40 && number < 50)
        return returnLetterToTen(number % 10) + 5;

    if (number >= 50 && number < 60)
        return returnLetterToTen(number % 10) + 5;

    if (number >= 60 && number < 70)
        return returnLetterToTen(number % 10) + 5;

    if (number >= 70 && number < 80)
        return returnLetterToTen(number % 10) + 7;

    if (number >= 80 && number < 90)
        return returnLetterToTen(number % 10) + 6;

    if (number >= 90 && number < 100)
        return returnLetterToTen(number % 10) + 6;

    return 0;

}

int returnLetter(int number) {

    if (number < 100) {
        return returnLetterTo100(number);
    }
        
    if (number == 1000) 
        return 11;

    if (number % 100 == 0)

        return returnLetterToTen(number / 100) + 7;

    if (number > 99 && number < 200)
        return returnLetterTo100(number % 100) + 13;

    if (number >= 200 && number < 300)
        return returnLetterTo100(number % 100) + 13;

    if (number >= 300 && number < 400)
        return returnLetterTo100(number % 100) + 15;

    if (number >= 400 && number < 500)
        return returnLetterTo100(number % 100) + 14;

    if (number >= 500 && number < 600)
        return returnLetterTo100(number % 100) + 14;

    if (number >= 600 && number < 700)
        return returnLetterTo100(number % 100) + 13;

    if (number >= 700 && number < 800)
        return returnLetterTo100(number % 100) + 15;

    if (number >= 800 && number < 900)
        return returnLetterTo100(number % 100) + 15;

    if (number >= 900 && number < 1000)
        return returnLetterTo100(number % 100) + 14;    
    

    return 0;
}

int main(void) {

    int sum =0;

    for (int i=1; i < 1001; i++) {
        sum += returnLetter(i);
    }
    printf("Cevap: %d \n ", sum );

    return 0;
}
    