#include "structures.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void print_binary_data(void *data, size_t size)
{
    u_int8_t byte = 0;

    for (int i = 0; i < size; i++) {
        byte = *(u_int8_t *)data;
        write(1, &byte, 1);
        data++;
    }
}

int main(void)
{
    player *myplayer = malloc(sizeof(player));

    myplayer->age = 13;
    myplayer->attack = 12;
    myplayer->life = 13;
    myplayer->name = strdup("PlayerName");
    myplayer->age = 12;
    print_binary_data(myplayer, sizeof(player));
}