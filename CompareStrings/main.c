#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hola estimado";
    char str2[] = "Ruben";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}