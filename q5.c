#include <stdio.h>
void function1 (int arr[], size_t n){
    for (int i = 0; i < n/2; i++) {
        int temp;
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 -i] = temp;
    }
    }