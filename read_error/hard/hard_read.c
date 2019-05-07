#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int giveARandom(int min, int max)
{
    return (rand() % max + min);
}

void show_me_numbers(const char *buffer)
{
    u_int8_t nb[255];

    for (u_int8_t i = 0; i < 255; i++)
        nb[i] = i;
    for (int i = 0; i < 2000; i++)
        printf("%c", nb[buffer[i]]);
    printf("\n");
}

int main(void)
{
    char buffer[2000];

    for (int i = 0; i < 2000; i++)
        buffer[i] = giveARandom(0, 255);
    show_me_numbers(buffer);
}