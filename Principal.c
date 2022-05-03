#include<stdio.h>
#include "Funciones.c"

float calcTotal(float precio, float cant);
float calcDesc(float total);
float calcIVA(float total);
float calcPago(float total, float desc, float iva);
void saludar();

int main(int argc, char const *argv[])
{
    char producto[30];
    float precio, cant, total, desc, iva, monto;
    saludar();
    printf("Producto: ");
    scanf(" %[^\n]", producto);
    printf("Precio: ");
    scanf("%f", &precio);
    printf("Cantidad: ");
    scanf("%f", &cant);
    total = calcTotal(precio, cant);
    desc = calcDesc(total);
    iva = calcIVA(total);
    monto = calcPago(total, desc, iva);
    printf("\n==============================\n");
    printf("Producto: %s\n", producto);
    printf("\n==============================\n");
    printf("Cantidad: %.2f\n", cant);
    printf("Precio: %.2f\n", precio);
    printf("=============================\n");
    printf("Total: %.2f\n", total);
    printf("Descuento: %.2f\n", desc);
    printf("IVA: %.2f\n", iva);
    printf("Monto: %.2f\n", monto);
    printf("=============================\n");
    return 0;
}
