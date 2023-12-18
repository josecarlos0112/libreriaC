#include <stdio.h>

int main() {

    printf("Parte a) Abrir un archivo\n");

    char *filename = "../hola.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("El archivo %s no se pudo abrir.\n", filename);
        return 1;
    }

    // Cerrar el archivo al final
    fclose(file);

    return 0;
}