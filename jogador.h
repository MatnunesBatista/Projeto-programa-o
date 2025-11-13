#ifndef JOGADOR_H
#define JOGADOR_H

#include "cor.h"

/**
 * @brief 
 */
typedef struct Jogador {
    //A definir
}Jogador;


/**
 * @brief 
 * @param p
 * @param nome 
 * @return 
 */
void criaJogador(Jogador* p, const char* nome);

/**
 * @brief 
 * @param p 
 * @return 
 */
const char* obtemNomeJogador(const Jogador* p);

/**
 * @brief 
 * @param 
 * @return 
 */
int obtemVitoriasJogador(const Jogador* p);

/**
 * @brief 
 * @param p
 * @return 
 */
int obtemDerrotasJogador(const Jogador* p);

/**
 * @brief 
 * @param p 
 */
void adicionaVitoria(Jogador* p);

/**
 * @brief 
 * @param p
 */
void adicionaDerrota(Jogador* p);

/**
 * @brief 
 * @param p 
 */
void jogadorParaString(const Jogador* p, char* buffer, int buffer_size);

#endif //JOGADOR_H
