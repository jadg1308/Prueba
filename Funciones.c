#include <stdio.h>

float calcTotal(float precio, float cant){
    return precio * cant;
}

float calcDesc(float total){
    return total * 0.1;
}

float calcIVA(float total){
    return total * 0.15;
}

float calcPago(float total, float desc, float iva){
    return total - desc + iva;
}

void saludar(){
    printf("Bienvenido a mi App\n");
}