#include <stdio.h>

int minimum (const int data [][10], const size_t n) {
   int currentLowest = data[0][0];
   for (int row = 0; row < n; row++) {
      for (int column = 0; column < 10; column++) {
         if ( currentLowest > data[row][column]) {
            currentLowest = data[row][column];
         }
      }
   }
   return currentLowest;
}