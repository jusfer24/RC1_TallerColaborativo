#include <stdio.h>
#include "lecturas.h"


int leerEnteroPositivo (char* mensaje){
    int valor;
    do{
        printf("%s", mensaje);
        scanf("%d",&valor);
            if(valor <=0){
            printf("Error, ingrese un dato entero positivo");
            }
    }while(valor <= 0);
    return valor;
}

int leerEntero(char*mensaje){
    int valor;
    printf("%s", mensaje);
    scanf("%d",&valor);
    return valor;
}

int leerEnteroEntre (char*mensaje, int limInferior, int limSuperior) {
    int valor;
    do{
        printf("%s", mensaje);
        scanf("%d",&valor);
        if ((valor < limInferior) || (valor > limSuperior)) {
            printf("Error: El numero debe estar entre %d y %d.\n", limInferior, limSuperior);
        }
    }while((valor < limInferior) || (valor > limSuperior));
    return valor;
}

int leerEnteroMenor (char*mensaje, int menor){ 
    int valor;
    do{  
        printf("%s", mensaje);
        scanf("%i", &valor);
        if (valor >= menor){
            printf("Error");
        }
    }while(valor >= menor);
    return valor;
}

float leerFlotante(char*mensaje){
    float valor;
    printf("%s", mensaje); 
    scanf("%f",&valor);
    return valor;
}

float leerFlotanteEntre (char* mensaje, float liminferior, float limsuperior){ 
    float valor;
    do{
        printf("%s", mensaje);
        scanf("%f", &valor);
        if((valor < liminferior)||(valor > limsuperior)){
            printf("Error: El numero debe estar entre %f y %f.\n", liminferior, limsuperior); 
        }
    }while((valor < liminferior) || (valor > limsuperior)); 
    return valor;
}

float leerFlotantePositivo (char* mensaje){
    float valor;
    do{
        printf("%s", mensaje);
        scanf("%f", &valor);
        if (valor<=0){
            printf("Error, ingrese un dato flotante positivo\n");
        }
    }while(valor<=0);
    return valor;
}
