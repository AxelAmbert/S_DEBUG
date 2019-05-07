#include <stdio.h>

void take_one_burger(int *stock, int *price)
{
    printf("Il y a %d burgers, pour un total de %d€\n", *stock, *stock * *price);
}

int main(void)
{
    int *price = 0;
    int stock = 0;

    scanf("%d", &stock); // Demande à l'utilisateur de rentrer un chiffre
    print_ressources(&stock, price);
}