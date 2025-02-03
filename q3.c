#include <stdio.h>

int main(void) {
    char arr[100];
    scanf("%s", arr);
    int i;
    for (i = 0; arr[i] != '\0'; i++);
    for (int j = 1; j < i - 1; j++) {
        printf("%c", arr[j]);
    }
    return 0;
}
