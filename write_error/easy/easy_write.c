#include <stdlib.h>

int main(void)
{
    int *numbers = malloc(sizeof(char) * 51);

    for (int i = 0; i < 50; i++) {
        numbers[i] = i;
    }
    numbers[50] = -1;
    for (int i = 0; numbers[i] != -1; i++) {
        printf("%d\n", numbers[i]);
    }
}
