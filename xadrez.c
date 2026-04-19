#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int Torre = 0;
	int Bispo = 0;
	int Rainha = 0;
	int Cavalo = 0;
	int esquerda = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    do {
		printf("Bispo move a frente e a direita. Posição %d.\n", Bispo+1 );
		Bispo++;

	} while (Bispo < 5);
	printf("Bispo está agora na posição %d.\n\n", Bispo);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Torre está na posição %d.\n", Torre+1);

	while (Torre < 5){
		Torre++;
	}
	printf("Torre moveu %d posições e está na posição %d\n\n", Torre, Torre);


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("Rainha está na posição incial\n");

	for (int i=1; i<5; i++) {
		printf("Rainha se move e está na posição %d.\n", i);
		Rainha = i;
	}

	printf("Rainha está agora na posição %d.\n\n", Rainha+1);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    do {
		esquerda++;

	while (Cavalo < 2){
			Cavalo++;
			printf("Cavalo movido %d posição para baixo\n", Cavalo);
		}
		//printf("Cavalo movido %d posições\n", Cavalo);
	}while (esquerda > 1);

	printf("Cavalo movido %d casa para esquerda.\n\n", esquerda);

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
