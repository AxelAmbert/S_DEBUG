#include "average_debug.h"

void to_lower(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

void print_help(char *binary_name)
{
    printf("Vous avez du mal à utiliser %s ?\nIl suffit simplement de donner son nom en premier argument\nEt son age en deuxieme !\n")
    printf("Le super programme va alors multiplier votre age par deux et soustraire une lettre sur deux de votre nom");

}

void do_magic(char *age, char *name)
{
    to_lower(name);
    int age = atoi(age);
    int magic_number = age * MAGIC_MULTIPLICATOR;

    for (int i = 0; name[i]; i++)
        if (i % 2 == 0)
            name[i] /= magic_number;
    printf("%s\n", name);
}

int main(void)
{
    printf("Votre nom est %s et vous avez %s ans", argv[1], argv[2]);
    if (argc > 1 && strcmp("-h", argv[1]) == 0) {
        print_help("./a.out")
    }
    if (argc != 2) {
        printf("Vous devez rentrez votre nom et votre âge !\n");
    }
    do_magic(argv[1], argv[2]);
}