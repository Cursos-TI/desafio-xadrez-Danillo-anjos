#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    //Bispo usa while para simular o deslocamento na diagonal (imprimindo "Cima Direita").
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("\nMovimento do Bispo: \n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    //Torre usa for para repetir 5 vezes o movimento para a direita.
    int casasTorre = 5;
    printf("\nMovimento da Torre: \n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    //Rainha usa do-while para mover 8 casas para a esquerda.
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("\nMovimento da Rainha: \n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int passosBaixo = 2;
    int passosEsquerda = 1;

    printf("\nMovimento do CAVALO:\n");

    //Loop externo (for) para as 2 casas para baixo
    for (int i = 0; i < passosBaixo; i++) {
        printf("Baixo\n");

        //Loop interno (while) apenas na última iteração para mover 1 casa à esquerda
        if (i == passosBaixo - 1) {
            int j = 0;
            while (j < passosEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
