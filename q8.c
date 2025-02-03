#include <stdio.h>
size_t in_between (const int data[], size_t length, int val_1, int val_2) {
      size_t counter = 0;
      for (size_t i = 0; i < length; i++) {
            if (val_1 <= data[i] && data[i] <= val_2)  {
                  counter += 1;
            }

      }
      return counter;
}