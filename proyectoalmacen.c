#include <stdio.h>
#include "lecturas.h"
#include "operacionesVec.h"
#define MAXMES 12

int main(int argc, char const *argv[]) {
    float mes[MAXMES], toneladas, promedio;
    ingresarcos(mes, MAXMES);
    mostrarcos(mes, MAXMES);
    printf("\nEl promedio de la cosecha del anterior anio es: %.2f", promedio=calcularPromedio(mes, MAXMES));
    printf("\nLa cosecha maxima del anterior anio es: %.2f ", cosMaxima(mes, MAXMES));
    cosMaxProm(mes, MAXMES, promedio);
return 0;
}