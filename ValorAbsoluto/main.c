#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

    printf("Parte a)\n");

    // Declarar números negativos
    int num = -10;
    int num1 = -5043;
    int num2 = -123;

    // Obtener el valor absoluto utilizando abs()
    int abs_num = abs(num);
    int abs_num1 = abs(num1);
    int abs_num2 = abs(num2);

    printf("El valor absoluto de %d es %d\n", num, abs_num);
    printf("El valor absoluto de %d es %d\n", num1, abs_num1);
    printf("El valor absoluto de %d es %d\n", num2, abs_num2);

    printf("\nParte b)\n");


    return 0;
}