#ifndef CODIGO_H
#define CODIGO_H

#include <stdbool.h>
#include "cor.h"  // usa o header das cores

// Numero maximo de cores num codigo
#define TAMANHO_CODIGO 8

/**
 * @struct Codigo
 * @brief 
 */
typedef struct {
   
} Codigo;

/**
 * @brief 
 * @param c 
 * @param colors 
 * @param size 
 */
void gerarCodigo(Codigo *c, Cor colors[], int size);

/**
 * @brief 
 * @param c 
 * @return 
 */
Codigo copia(Codigo *c);

/**
 * @brief 
 * @param a 
 * @param b 
 * @return 
 */
bool iguais(Codigo *a, Codigo *b);

/**
 * @brief 
 *
 * @param 
 * @param 
 * @param 
 * @param 
 */
void quantasCorretas(Codigo *secret, Codigo *trial, int *a, int *b);

/**
 * @brief 
 * 
 * @param c 
 * @param repString 
 */
void codigoParaString(Codigo* c, char repString[TAMANHO_CODIGO + 1]);

#endif // CODIGO_H
