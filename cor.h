/**
 * @file colors.h
 * @brief Definicao do tipo enumerado `Cor` e funcoes auxiliares para conversao entre cores e texto.
 *
 * Este cabecalho define o tipo enumerado `Cor`, que representa as cores
 * disponiveis no jogo, bem como funcoes para conversao entre valores de cor e
 * as suas representacoes em texto (`const char*`).
 *
 * As funcoes sao implementadas em `colors.c`.
 */


#ifndef COR_H
#define COR_H


/**
 * @def NUM_CORES
 * @brief Número total de cores disponiveis no jogo.
 *
 * Este valor e usado para limitar loops e verificar se uma cor e valida.
 */
#define NUM_CORES 6

/**
 * @enum Cor
 * @brief Enumeracao das cores suportadas no jogo.
 *
 * Cada valor corresponde a um indice na tabela de nomes (`nomeCores[]`).
 * As cores estao numeradas de 0 ate `NUM_CORES - 1`.
 */
typedef enum {
    RED,    /** Cor vermelha */
    GREEN,  /** Cor verde */
    BLUE,   /** Cor azul */
    YELLOW, /** Cor amarela */
    ORANGE, /** Cor laranja */
    PURPLE  /** Cor roxa */
} Cor;

/**
 * @brief Converte um valor do tipo `Cor` para a sua representacao textual.
 *
 * @param c Valor da cor (por exemplo, `RED`, `GREEN`, `BLUE`, ...).
 * @return Ponteiro para uma string com o nome da cor correspondente.
 *         Se o valor for invalido, devolve `"UNKNOWN"`.
 */
const char* corParaString(Cor c);

/**
 * @brief Converte uma string com o nome da cor para o valor enumerado correspondente.
 *
 * @param name String com o nome da cor (exemplo: `"RED"`, `"BLUE"`, `"PURPLE"`).
 * @return Valor do tipo `Cor` correspondente, ou `-1` se a string nao for valida.
 */
int nomeParaCor(const char* name);

/**
 * @brief Tabela de strings com os nomes das cores.
 *
 * O indice de cada string corresponde diretamente ao valor enumerado `Cor`.
 * Exemplo: `nomeCores[RED] == "RED"`.
 *
 * @warning Esta variavel e **definida** em `colors.c`, e apenas **declarada** aqui.
 */
extern const char* nomeCores[];

#endif
