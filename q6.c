#include <stdio.h>

double mean(const int data[], size_t length) {
    if (length == 0) {
        return 0.0;
    }

    double sum = 0.0;
    for (size_t i = 0; i < length; i++) {
        sum += data[i];
    }

    return sum / length;
}
