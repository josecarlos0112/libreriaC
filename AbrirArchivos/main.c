#include <stdio.h>

int main() {

    printf("Parte a) Abrir un archivo\n");

    char *filename = "../hola.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("El archivo %s no se pudo abrir.\n", filename);
        return 1;
    }else{
        printf("El archivo %s se abrio correctamente.\n", filename);
    }

    // Cerrar el archivo al final
    fclose(file);

    printf("\nParte b) Leer un archivo\n");

    fprintf(file, "Hola, mundo!\n");

    // Cerrar el archivo después de escribir
    fclose(file);

    // Abrir de nuevo para leer
    file = fopen("../hola.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leído del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);

    return 0;
}