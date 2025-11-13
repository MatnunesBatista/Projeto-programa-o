#ifndef MASTERMIND_H
#define MASTERMIND_H

#include "codigo.h"
#include "jogador.h"
#include <stdlib.h>

/**
 * @brief 
 */

/**
 * @def 
 * @brief 
 */
#define NUM_MAX_TENTATIVAS 25

/**
 * @def 
 * @brief 
 */
#define NUM_COLORS 6

/**
 * @struct 
 * @brief 
 */
typedef struct {
    //completar
} Mastermind;

/**
 * @brief 
 *
 * @param m 
 * @param semente 
 * @param numPins 
 * @param p 
 */
void iniciarMastermind(Mastermind *m, int semente, int numPins, Jogador* p);

/**
 * @brief 
 *
 * @param m 
 */
void iniciarRonda(Mastermind* m);

/**
 * @brief 
 *
 * @param m 
 * @param trial 
 */
void efetuaJogada(Mastermind* m, Codigo* trial);

/**
 * @brief 
 *
 * @param m 
 * @return 
 */
bool estaTerminadaARonda(Mastermind* m);

/**
 * @brief 
 *
 * @param m 
 * @param buffer 
 * @param size 
 */
void mastermindParaString(Mastermind* m, char buffer[], int size);

/**
 * @brief 
 *
 * @param m 
 * @return 
 */
int obterNumeroTentativas(Mastermind* m);

/**
 * @brief 
 *
 * @param m 
 * @return 
 */
bool oSegredoFoiRevelado(Mastermind* m);

/**
 * @brief 
 *
 * @param m 
 * @return 
 */
int obterNumeroDePins(Mastermind* m);

/**
 * @brief 
 *
 * @param 
 * @return 
 */
Jogador* obterJogador(Mastermind* m);

/**
 * @brief 
 *
 * @param m 
 * @return 
 */
int obterPontuacao(Mastermind* m);

#endif
