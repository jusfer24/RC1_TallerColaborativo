#include <stdio.h>
#include "lecturas.h"
#include "operacionesVec.h"

int main(int argc, char const *argv[]) {
    int tamano, opcion, new[1], grade;
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
        opcion = leerEnteroEntre("Ingrese su opcion: ", 1, 4);
        switch (opcion) {
            case 1:
                editarLibro(nombres, cantidades, precios, tamano);
                printf("\n Inventario modificado:\n");
                imprimirLibros(nombres, cantidades, precios, tamano);
                break;
            case 2:
                new[0] = leerEnteroPositivo("\nIngrese la nueva cantidad de libros a almacenar: ");
                grade=new[0];
                for (int i = tamano; i < grade; i++){
                    printf("Ingrese la informacion de venta del libro %i:\n", i+1);
                    agregarLibro(nombres, cantidades, precios, i+1);
                    printf("*********************************************\n");
                }
                tamano=new[0];
                printf("\n Inventario modificado:\n");
                imprimirLibros(nombres, cantidades, precios, tamano);
                break;
            case 3:
               borrarLibro(nombres, cantidades, precios, tamano);
               break;
            case 4:
                printf("Cerrando el programa...\n");
                break;
            default:
                printf("Opción inexistente.\n");
        }
        
    } while (opcion != 4);

    printf("Programa finalizado\n");
    return 0;
}
