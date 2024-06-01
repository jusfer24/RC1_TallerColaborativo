#include <stdio.h>
#include "lecturas.h"
#include "operacionesVec.h"

void ingresarcos(float vector[],int mes){
    for(int i=0; i < mes; i++){
        vector[i] = leerFlotantePositivo("Ingrese las toneladas cosechadas en el mes: \n");
        //leer datos con scanf
        
    }
}
void mostrarcos(float vector[], int mes){
    for (int i = 0; i < mes; i++){
        printf("\nMes %i.- %.2f", i+1, vector[i]);
    }
}
float calcularPromedio(const float vector[],int mes){
    int suma = 0;
    for(int i = 0; i < mes; i++){
        suma +=vector[i];
    }
    return suma/mes;
}
float cosMaxima(const float vector[],int mes){
    int max = vector[0];
    for(int i = 1; i < mes; i++){
        if(max < vector[i]){
            max = vector[i];
        }
    }
    return max;
}
void cosMaxProm(const float vector[], int mes, float promedio){
    int prom=0;
    for(int i = 1; i < mes; i++){
        if(promedio < vector[i]){
            prom=prom+1;
        }
    }
    printf("\nTotal de meses donde la cosecha fue mayor al promedio: %i", prom);
}
