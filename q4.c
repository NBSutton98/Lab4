#include <stdio.h>

void nonStart(const char arr[], const char arr2[]) {
    int i;
    for (i = 1; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    for (i = 1; arr2[i] != '\0'; i++) {
        printf("%c", arr2[i]);
    }
}
int main(void) {
    nonStart("Hello", "There");
}