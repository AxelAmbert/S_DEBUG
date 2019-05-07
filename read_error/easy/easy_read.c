#include <stdio.h>

int main(void)
{
    int age;

    if (age >= 18) {
        printf("Tu es majeur !\n");
    } else if (age < 18) {
        printf("Tu n'est pas majeur !\n");
    } else {
        printf("????\n");
    }
}