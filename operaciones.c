#include <stdio.h>
#include <math.h>
#include "operaciones.h"
#include "lecturas.h"

void menu(int codigoem){
    int horas, extrahoras, ventas, tarifas, piezas;
    float tarifahor, salariosem;
    switch(codigoem) {
        case 1:
            printf("El salario semanal para el jefe es:  $%.2f\n", leerFlotantePositivo("Ingrese el salario semanal:\n "));
            break;
        case 2:
            horas=leerEnteroPositivo ("Ingrese las horas trabajadas: \n");
            if(horas > 40) {
                extrahoras = horas - 40;
                horas = 40;
            }
            tarifahor=leerFlotantePositivo ("Inngrese la tarifa por hora: ");
            salariosem = horas * tarifahor + extrahoras * tarifahor * 1.5;
            printf("El salario semanal para el trabajador por horas es: $%.2f\n", salariosem);
            break;
        case 3:
            ventas=leerEnteroPositivo("Ingrese las ventas semanales:\n ");
            salariosem = 250 + ventas * 0.057;
            printf("El salario semanal para el trabajador por comisiones es: $%.2f\n", salariosem);
            break;
        case 4:
            tarifas=leerEnteroPositivo("Ingrese la tarifa por pieza vendida: ");
            piezas=leerEnteroPositivo("Ingrese el numero de piezas producidas: ");
            salariosem = tarifas * piezas;
            printf("El salario semanal para el trabajador por tarifas por piezas producidas es: $%d\n", salariosem);
            break;
        default:
            printf("Codigo invalido ingresado\n");
    }
}

float calcularSalarioBase(int horas, float valor){
  float salario, valorExtra;
  int horasExtras;
  horasExtras = horas-40;
    if(horasExtras > 0){
      salario = 40*valor;
      if(horasExtras <= 10)
        valorExtra = 1.1;
      else if (horasExtras <= 15)
        valorExtra = 1.15;
      else 
        valorExtra = 2;
        salario = salario+horasExtras*valorExtra;    
    }else
      salario = valor*horas;

  return salario;
}

float calcularBonificacion(float ventas){
  float bonificaciones;
  if(ventas <= 800)
      bonificaciones = 0.02;
    else if(ventas <= 1500)
      bonificaciones = 0.04;
    else if(ventas <= 3000)
     bonificaciones = 0.06;
    else
     bonificaciones = 0.08;
  return bonificaciones;
}

void dias(int dia){
  switch (dia){
    case 1:
      printf("Lunes\n");
      break;
  case 2:
      printf("Martes\n");
      break;
    case 3:
    printf("Miercoles\n");
      break;
    case 4:
    printf("Jueves\n");
      break;
    case 5:
      printf("Viernes\n");
      break;
    case 6:
      printf("Sabado\n");
      break;
    case 7:
      printf("Domingo\n");
      break;
  }
}
void numeroPerfecto(int numero){
    int suma = 0;
    for(int i= 1; i<= numero/2;i++){
        if(numero % i == 0)
            suma+=i;
    }
   
    if(numero == suma)
        printf("el numero es perfecto");
    else
        printf("el numero no es perfecto");

}

float hipotenusa(float a,float b){
    return sqrtf(powf(a,2)+powf(b,2));
}

float tiempoPendulo(float longitud){
    return 2*3.1416* sqrtf(longitud/9.8);
}