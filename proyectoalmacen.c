#include <stdio.h>
#include "lecturas.h"
#include "operacionesVec.h"

int main(int argc, char const *argv[]) {
    int tamano, opcion;
    printf("--> * Bienvenido a la Libreria Andina* <--\n");
    tamano = leerEnteroPositivo("\nIngrese cantidad de libros a almacenar: ");
    char nombres[tamano][50];  
    int cantidades[tamano];
    float precios[tamano];  
    
    ingresarLibros(nombres, cantidades, precios, tamano);
    printf("\n");
    printf("+++++++++++++++++++++++++++++++\n");
    printf("\n");
    imprimirLibros(nombres, cantidades, precios, tamano);
    printf("\n");

    do {
       mostrarmenu();
        opcion = leerEnteroEntre("Ingrese su opcion: ", 1, 3);
        switch (opcion) {
            case 1:
                editarLibro(nombres, cantidades, precios, tamano);
                printf("\n Inventario corregido:\n");
                imprimirLibros(nombres, cantidades, precios, tamano);
                break;
            case 2:
                imprimirLibros(nombres, cantidades, precios, tamano);
                break;
            case 3:
                printf("Cerrando el programa...\n");
                break;
            default:
                printf("Opción inexistente.\n");
        }
    } while (opcion != 3);

    printf("Programa finalizado\n");
    return 0;
}
