
#include "entrada.h"
#include "funciones.h"
#include "impresion.h"

#include <stdio.h>
#include <stdlib.h>

void menuOpciones(){

	int opcion;
	int numeroValidado;
	do {
			numeroValidado =ingresarNumero(&opcion,"\nSeleccione una opcion:\n1-IngresarKm\n2-Ingresar Precios de vuelos\n3-Calcular costos\n4-InformarResultados\n5-Carga forzada de datos\n6-Salir ","Opcion invalida\n", 1, 6, 2);

			if (!numeroValidado) {
				switch (opcion) {

					case 1:
						cargarKm();

							break;

					case 2:
						cargarPrecioVueloLa();
						cargarPrecioVueloAe();
							break;

					case 3:
							calcularCostosTotales();
							break;

					case 4:
							imprimirDatos();
							break;

					case 5:
							cargaForzada();
							break;
				}
			}

		} while (opcion != 6);
}
