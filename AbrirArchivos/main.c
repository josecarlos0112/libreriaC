#include <stdio.h>

int main() {

    printf("Parte a) Abrir un archivo\n");

    char *filename = "../hola.txt";
    FILE *file = fopen(filename, "w");

    fprintf(file, "Hola,profeRubeeeen!\n");

    if (file == NULL) {
        printf("El archivo %s no se pudo abrir ni para escribir en el.\n", filename);
        return 1;
    }else{
        printf("El archivo %s se abrio correctamente.\n", filename);
    }

    printf("\nParte b) Escribir y leer un archivo\n");

    // Cerrar el archivo después de leer
    fclose(file);

    // Abrir de nuevo para leer
    file = fopen("../hola.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[50];
    fscanf(file, "%s", buffer);

    printf("Leida del archivo: %s\n", buffer);

    // Cerrar el archivo después de leer
    fclose(file);

    return 0;
}