#include <stdio.h>
#include "lecturas.h"
#include "operacionesVec.h"

void ingresarLibros(char nombres[][50], int cantidades[], float precios[], int tamano) {
    printf("Ingrese los datos en el siguiente orden: \n");
    printf("*********************************************\n");
    printf("|Nombre | Cantidad | Precio|\n");
    printf("*********************************************\n");
    for (int i = 0; i < tamano; i++) {
        printf(" -----------------------------------------\n"); 
        printf("Ingrese el nombre del libro %d: ", i + 1);
        scanf("%s", nombres[i]);
        leerEnteroPositivo(("Ingrese la cantidad de libros del ejemplar %d: ", i + 1));
        leerFlotantePositivo("Ingrese el precio del libro por unidad en dolares: ");
    }
}

void imprimirLibros(char nombres[][50], int cantidades[], float precios[], int tamano) {
    printf("Libreria Andina\n");
    printf("|Nombre     | Cantidad   | Precio|\n");
    for (int i = 0; i < tamano; i++) {
        printf(" %d | %s | %d unidades | %.2f $\n", i + 1, nombres[i], cantidades[i], precios[i]);
    }
}

void mostrarmenu(){
    printf("\n");
    printf("********************\n");
    printf("Menu de opciones:\n");
    printf("1. Editar un dato\n");
    printf("2. Mostrar inventario\n");
    printf("4. Cerrar\n");
    printf("********************\n");
}

void editarLibro(char nombres[][50], int cantidades[], float precios[], int tamano) {
    int pop;
    printf("Ingrese el numero de libro que desea editar: ");
    pop = leerEnteroEntre("", 1, tamano);
    printf("Ingrese el nuevo nombre  %d: ", pop);
    scanf("%s", nombres[pop - 1]);
    printf("Ingrese la nueva cantidad de libros %d: ", pop);
    scanf("%d", &cantidades[pop - 1]);  
    printf("Ingrese el nuevo precio del libro : ");
    scanf("%f", &precios[pop - 1]);
    printf("Editado con exito.\n");
}
