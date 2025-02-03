#include <stdio.h>

size_t count_even (const int data [][7], const size_t n) {
    int counter = 0;
    for (int row = 0; row < n; row++) {
        for (int column = 0; column < 7; column++) {
            if (data[row][column] % 2 == 0) {
               counter += 1;
            }
        }
    }
    return counter;
}