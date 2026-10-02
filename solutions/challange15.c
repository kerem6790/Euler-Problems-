// What is the greatest product of four adjacent numbers in the same direction (up, down, left, right, or diagonally) in the   grid?

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void fill_paths(size_t rows, size_t cols,
    unsigned long long paths[rows][cols]) {

    for (size_t i=0; i<rows;i++ ) {
        for (size_t j=0; j<cols; j++) {
            if (i == 0 || j == 0)
                paths[i][j] = 1;

            else
                paths [i][j] =  paths [i-1][j] + paths [i][j-1]  ; 


                
        }
    }
    }





int main(void) {

    size_t row = 21;
    size_t col = 21;
    unsigned long long path[21][21];

    fill_paths(row, col, path);

    printf("Cevap: %lld\n", path[20][20]);

    return 0;
}
