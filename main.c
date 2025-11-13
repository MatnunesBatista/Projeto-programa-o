#include <stdio.h>
#include <string.h>
#include "cor.h"
#include "codigo.h"
#include "jogador.h"
#include "mastermind.h"

#define MAX_PINS 8

// Função auxiliar para ler uma tentativa do utilizador
void readTrial(Codigo* trial, int numPins) {
    char input[16];
    Cor colors[MAX_PINS];

    printf("Insira sua tentativa (%d cores, separadas por espaço, R G B Y O P):\n", numPins);
    for (int i = 0; i < numPins; i++) {
        scanf("%s", input);
        colors[i] = nomeParaCor(input);
        if (colors[i] == -1) {
            printf("Cor inválida! Tente novamente.\n");
            i--; // repetir esta posição
        }
    }

    gerarCodigo(trial, colors, numPins);
}

int main() {
    // Criar jogador
    Jogador p;
    criaJogador(&p, "Jogador");

    // Inicializar Mastermind
    Mastermind game;
    int seed = 123;   // para previsibilidade
    int numPins = 4;
    iniciarMastermind(&game, seed, numPins, &p);

    printf("=== Bem-vindo ao Mastermind ===\n");
    printf("Tente adivinhar o código secreto de %d cores!\n", numPins);

    char buffer[1024];
    Codigo trial;

    // Loop do jogo
    while (!estaTerminadaARonda(&game)) {
        readTrial(&trial, numPins);
        efetuaJogada(&game, &trial);

        mastermindParaString(&game, buffer, sizeof(buffer));
        printf("\n%s\n", buffer);
    }

    if (obtemVitoriasJogador(&p) > 0) {
        printf("Parabéns! Você descobriu o código secreto!\n");
    } else {
        printf("Fim do jogo! Você não conseguiu adivinhar o código.\n");
    }

    printf("Vitórias: %d | Derrotas: %d\n", obtemVitoriasJogador(&p), obtemDerrotasJogador(&p));
    return 0;
}
