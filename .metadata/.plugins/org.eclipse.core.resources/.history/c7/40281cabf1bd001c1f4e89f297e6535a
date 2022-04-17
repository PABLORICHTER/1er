
#include "entrada.h"
#include <stdio.h>
#include <stdlib.h>
#include "impresion.h"


int km;
float precioVLa=0;
float precioDesLa=0;
float precioCreLa=0;
float precioBLa=0;
float precioULa=0;

float precioVAe=0;
float precioDesAe=0;
float precioCreAe=0;
float precioBAe=0;
float precioUAe=0;
float diferenciaVuelos=0;

float bitcoin = 4606954.55;

//validadores
int cargaKm = -1;
int cargaVueloAe = -1;
int cargaVueloLa = -1;
int calculosRealizado = -1;
int res;

void cargarKm() {

	res = ingresarNumero(&km, "Ingrese los km ", "Error, Datos invalidos\n", 1,20000000, 3);
	if (res == 0) {
		printf("\nKm cargados\n");
		cargaKm = 0;
	} else {
		printf("No se pudo cargar los km");
	}
}

void cargarPrecioVueloAe() {
	int res1;
	if(cargaKm==0){
		res1 = ingresarFlotante(&precioVAe, "Ingrese el precio del vuelo por Aerolineas ", "Error, Datos invalidos\n", 1, 20000000, 3);
			if (res1 == 0) {
				printf("\nPrecio guardado correctamente\n");
				cargaVueloAe = 0;
			} else {
				printf("Error, ingrese los datos nuevamente");
			}
	}else{
		printf("\nError, Debe cargar los km primero");
	}
}

void cargarPrecioVueloLa() {
	int res2;
	if(cargaKm==0){
		res2 = ingresarFlotante(&precioVLa, "Ingrese el precio del vuelo por Latam ","Error, Datos invalidos\n", 1, 20000000, 3);
			if (res2 == 0) {
				printf("Precio guardado correctamente\n");
				cargaVueloLa = 0;
			} else {
				printf("Error, ingrese los datos nuevamente");
			}
	}else{
		printf("\nError, Debe cargar los km primero");
	}
}

void calcularCostosTotales(){
	if(cargaKm==0 && cargaVueloAe==0 && cargaVueloLa==0){
		//LATAM
		precioDesLa= precioVLa - (precioVLa * 0.1);
		precioCreLa = precioVLa+ (precioVLa * 0.2);
		precioBLa =  (precioVLa *100) / bitcoin;
		precioULa = precioVLa / km;

		//AEROLINEAS
		precioDesAe= precioVAe - (precioVAe * 0.1);
		precioCreAe = precioVAe+ (precioVAe * 0.2);
		precioBAe =  (precioVAe *100) / bitcoin;
		precioUAe = precioVAe / km;


		if(precioVAe>= precioVLa){
			diferenciaVuelos = precioVAe - precioVLa;
		}
		else{
			diferenciaVuelos = precioVLa - precioVAe;
		}

		calculosRealizado=0;
		printf("\nOperaciones realizadas\n");
	}

	else{
		printf("Debe realizar los pasos anteriores a esta opcion\n");
	}
}

void imprimirDatos(){
	if(calculosRealizado==0){
		imprimirKm(&km);
		imprimirDatosAe(&precioVAe, &precioDesAe, &precioCreAe, &precioBAe, &precioUAe);
		imprimirDatosLa(&precioVLa, &precioDesLa, &precioCreLa, &precioBLa, &precioULa);
		imprimirDiferencia(&diferenciaVuelos);
	}else{
		printf("\nDebe hacer los calculos previos\n");

	}
}


void cargaForzada(){
	km= 7090;
	precioVAe= 162965;
	precioVLa= 159339;

	cargaKm=0;
	cargaVueloAe=0;
	cargaVueloLa=0;

	calcularCostosTotales();
	imprimirDatos();
}

