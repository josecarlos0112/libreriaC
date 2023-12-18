#include <string.h>
#include <stdio.h>

int main() {
    //Prueba 1
    char str1[] = "Hola Ruben";
    char str2[] = "Hola Ruben";
    //Prueba 2
    char str3[] = "Como estás?";
    char str4[] = "Yo estoy bien";

    int comparison = strcmp(str1, str2);
    int comparison1 = strcmp(str3, str4);

    if (comparison == 0) {
        printf("En la primera prueba\n Las cadenas son iguales.\n");
    } else {
        printf("En la primera prueba\n Las cadenas son diferentes.\n");
    }

    if (comparison1 == 0) {
        printf("En la segunda prueba\n Las cadenas son iguales.\n");
    } else {
        printf("En la segunda prueba\n Las cadenas son diferentes.\n");
    }

    return 0;
}