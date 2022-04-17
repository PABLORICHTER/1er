


#ifndef IMPRESION_H_
#define IMPRESION_H_

/// @fn IMPRIME LOS KM

void imprimirKm(int* km);

/// IMPRIME LOS VALORES DE AEROLINEAS con los diferentes medios de pago
void imprimirDatosLa(float* precioVLa, float* precioDesLa, float* precioCreLa, float* precioBLa, float* precioULa);

/// /// IMPRIME LOS VALORES DE AEROLINEAS con los diferentes medios de pago
///
/// @pre
/// @post
/// @param precioVAe
/// @param precioDesAe
/// @param precioCreAe
/// @param precioBAe
/// @param precioUAe

void imprimirDatosAe(float* precioVAe, float* precioDesAe, float* precioCreAe, float* precioBAe, float* precioUAe);void imprimirDiferencia(float* diferenciaVuelos);

/// @fn DIFERENCIA ENTRE AEROLIENAS Y LATAM
/// @brief
///
/// @pre
/// @post
/// @param diferenciaVuelos

void imprimirDiferencia(float* diferenciaVuelos);

#endif /* IMPRESION_H_ */
