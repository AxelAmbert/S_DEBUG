#include <stdlib.h>
#include <stdio.h>
#include "average_struct.h"

void init_struct(my_struct_t *my_struct)
{
    my_struct->i = 0;
    my_struct->next = NULL;
    my_struct->str = NULL;
    my_struct->x = 0;
}

void print_struct_value(my_struct_t *my_struct)
{
    printf("%s - %p - %d - %d\n", my_struct->str ? my_struct->str : "NULL",
            my_struct->next, my_struct->i, my_struct->x);
}

int main(void)
{
    my_struct_t *my_struct = malloc(sizeof(my_struct));

    init_struct(my_struct);
    print_struct_value(my_struct);
}