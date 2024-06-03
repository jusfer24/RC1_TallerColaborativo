#include <stdio.h>
#include "lecturas.h"
#include "operacionesVec.h"

int main() {
    int filas;
    char nombres[50][50];  
    int cantidades[50];
    float precios[50];     
    printf("--> * Bienvenido * <--\n");
    filas = leerEnteroPositivo("\nIngrese cantidad de libros: ");
    
    printf("\n");
    printf("Ingrese los datos: \n");
    printf("*********************************************\n");
    printf("[nombre | cantidad | precio]\n");
    printf("*********************************************\n");
   
    ingresarLibros(nombres, cantidades, precios, filas);
    printf("\n");
    printf("+++++++++++++++++++++++++++++++\n");
    printf("\n");
    printf("\n");
    printf("Los libros ingresados son:\n");
    printf("[ | nombre     | cantidad   | precio   ]\n");
    imprimirLibros(nombres, cantidades, precios, filas);
    printf("\n");
    printf("\n");

    int op;
    do {
        printf("\n");
        printf("********************\n");
        printf("Menu de opciones:\n");
        printf("1. Editar un dato\n");
        printf("2. Eliminar un dato\n");
        printf("3. Cerrar\n");
        printf("********************\n");
        op = leerEnteroEntre("Ingrese su opcion: ", 1, 3);

        switch (op) {
            case 1:
                editarLibro(nombres, cantidades, precios, filas);
                printf("\n Inventario corregido:\n");
                imprimirLibros(nombres, cantidades, precios, filas);
                break;
            case 2:
                int opo;
                printf("Ingrese el número de libro que desea eliminar: ");
                opo = leerEnteroEntre("", 1, filas);
                printf("\nLibro eliminado.\n");
                break;
            case 3:
                printf("Cerrando el programa...\n");
                break;
            default:
                printf("Opción incorrecta.\n");
        }
    } while (op != 3);
    
    printf("Programa finalizado\n");
    return 0;
}

int leerEnteroPositivo(char* mensaje) {
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
        if (valor <= 0) {
            printf("\n-------------------------------------------------------------------\n");
            printf("Error: El valor debe ser un número entero positivo.\n");
            printf("-------------------------------------------------------------------\n");
        }
    } while (valor <= 0);
    return valor;
}

void ingresarLibros(char nombres[][50], int cantidades[], float precios[], int filas) {
    for (int i = 0; i < filas; i++) {
        printf(" -----------------------------------------\n"); 
        printf("Ingrese el nombre del libro %d: ", i + 1);
        scanf("%s", nombres[i]);
        printf("Ingrese la cantidad de libros del ejemplar %d: ", i + 1);
        scanf("%d", &cantidades[i]);  
        printf("Ingrese el precio del libro por unidad: ");
        scanf("%f", &precios[i]);
    }
}

void imprimirLibros(char nombres[][50], int cantidades[], float precios[], int filas) {
    for (int i = 0; i < filas; i++) {
        printf(" %d | %s | %d unidades | %.2f $\n", i + 1, nombres[i], cantidades[i], precios[i]);
    }
}

void editarLibro(char nombres[][50], int cantidades[], float precios[], int filas) {
    int pop;
    printf("Ingrese el numero de libro que desea editar: ");
    pop = leerEnteroEntre("", 1, filas);
    printf("Ingrese el nuevo nombre  %d: ", pop);
    scanf("%s", nombres[pop - 1]);
    printf("Ingrese la nueva cantidad de libros %d: ", pop);
    scanf("%d", &cantidades[pop - 1]);  
    printf("Ingrese el nuevo precio del libro : ");
    scanf("%f", &precios[pop - 1]);
    printf("Editado con exito.\n");
}

int leerEnteroEntre(char* mensaje, int limInferior, int limSuperior) {
    int valor;
    do {
        printf("%s", mensaje);
        scanf("%d", &valor);
        if (valor < limInferior || valor > limSuperior) {
            printf("-------------------------------------------------------------------\n");
            printf("Error: El número debe estar entre %d y %d.\n", limInferior, limSuperior);
            printf("-------------------------------------------------------------------\n");
        }
    } while (valor < limInferior || valor > limSuperior);
    return valor;
}