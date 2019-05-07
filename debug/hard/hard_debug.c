//;

#include "hard_debug.h"

void print_42()
{
    printf("42\n");
}

void print_hello()
{
    printf("salut salut\n");
}

void my_putstrrecursive(unsigned char *charac)
{
    write(1, charac, 1);
    my_putstrrecursive(++charac);
}

int main(void)
{
    integer i = 0;
    uint var = malloc(sizeof(oui) * yes);

    print_hello();
    strcpy(var, "Mé c kwa 276 et 315 ? :(");
    printf("Wtf les amis, trop simple cet exo\n");
    my_putstrrecursive("On fait pas de la récursivité nous ???\n");
    print_42();
}