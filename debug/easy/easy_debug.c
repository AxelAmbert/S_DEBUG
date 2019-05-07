/* Make it compile, works, and without warnings of course */

void count()
{
    int i = 0;

    for (int i = 0; i < 100; i++) {
        printf("Je sais compter jusqu'a : %d\n", i);
    }
    printf("Au final, je sais compter jusqu'a %d\n", i);
}

void alphabet()
{
    for (char c = 'A'; c < 'z'; c++) {
        printf("La %deme lettre de l'alphabet est : %c\n", c - 'A', c);
    }
}

void print_string(char *str)
{
    int i = 0;

    while (str) {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    count();
    alphabet();
    print_string("coucou salut\n");
}