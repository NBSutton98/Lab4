#include <stdio.h>
#include <math.h>

int max_abs (const int data[], size_t length) {
    if (length == 0) {
        return 0;
    }
    int currentMax = data[0];
    for (int i = 1; i < length; i++) {
        if (abs(data[i]) > abs(currentMax)) {
            currentMax = data[i];
        }
    }
    return currentMax;
}