
#include <stdio.h>
#include <stdlib.h>
#include "impresion.h"

void imprimirKm(int* km){
	printf("\n\nKm ingresados: %d",*km);
}

void imprimirDatosAe(float* precioVAe, float* precioDesAe, float* precioCreAe, float* precioBAe, float* precioUAe){
	printf("\n\nPrecio Aerolineas: $%.2f",*precioVAe);
	printf("\nPrecio con tarjeta de debito : $%.2f", *precioDesAe);
	printf("\nPrecio con tarjeta de credito : $%.2f", *precioCreAe);
	printf("\nPrecio pagando con bitcoin : $%.2f", *precioBAe);
	printf("\nMostrar precio unitario : $%.2f", *precioUAe);
}

void imprimirDatosLa(float* precioVLa, float* precioDesLa, float* precioCreLa, float* precioBLa, float* precioULa){
	printf("\n\nPrecio Aerolineas: $%.2f", *precioVLa);
	printf("\nPrecio con tarjeta de debito : $%.2f", *precioDesLa);
	printf("\nPrecio con tarjeta de credito : $%.2f", *precioCreLa);
	printf("\nPrecio pagando con bitcoin : $%.2f", *precioBLa);
	printf("\nMostrar precio unitario : $%.2f", *precioULa);
}

void imprimirDiferencia(float* diferenciaVuelos){
	printf("\n\nLa diferencia de precios es: %.2f",*diferenciaVuelos);
}
