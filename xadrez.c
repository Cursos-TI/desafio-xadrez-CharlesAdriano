// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das
// peças de xadrez. O objetivo é utilizar estruturas de repetição e funções para determinar os
// limites de movimentação dentro do jogo.

/* Criar um único programa em C que simule o movimento de três peças:
 * Torre, Bispo e Rainha. Para cada peça, utilize uma estrutura de repetição
 * diferente (for, while ou do-while) para simular seu movimento. O programa
 * deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.
 *
 * Saída de Dados: O programa deverá imprimir no console a direção do movimento a cada
 * casa percorrida pela peça. Para movimentos na diagonal (Bispo), imprimir a combinação
 * de duas direções. Utilize o comando printf para exibir as informações. As saídas devem
 * seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");,
 * printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");
 *
 * REGRA DE MOVIMENTOS

	DAMA	> QUANTAS CASA QUISER EM QUALQUER DIREÇÃO;
	REI 	> UMA EM UMA CASA EM QUALQUER DIREÇÃO;
	TORRE	> PARA FRENTE PARA TRAZ PARA UM LADO E OUTRO QUANTAS CASA QUISER;
	BISPO	> ANDA SOMENTE NA DIAGONAL;
	CAVALO	> DOIS A FRENTE E UM PARA O LADO;
	PIÃO	> UMA EM UMA CASA.
 */
#include <stdio.h>

// Função recursiva para imprimir números de n até 1

void bispoLoop(int n)
{
	if (n > 0)
	{
		bispoLoop(n - 1); // Chama a si mesma com n - 1
		printf("Cima");	  // Imprime o valor atual de n
	}
}

void torreLoop(int n)
{
	if (n > 0)
	{
		torreLoop(n - 1);	 // Chama a si mesma com n - 1
		printf("Direita\n"); // Imprime o valor atual de n
	}
}

void damaLoop(int n)
{

	if (n > 0)
	{
		damaLoop(n - 1);	   // Chama a si mesma com n - 1
		printf("Esquerda.\n"); // Imprime o valor atual de n
	}
}

int main()
{
	// Declaração de variáveis constantes para representar o número de casas que cada peça pode se mover.
	int movimentoTorre = 5;
	int movimentoBispo = 5;
	int movimentoDama = 8;
	int movimentoCavalo = 5;
	int direita = 0;
	int esquerda = 0;
	int cima = 0;
	int baixo = 0;
	// int movimentoInformado = 0;

	// Nível Mestre - Funções Recursivas e Loops Aninhados
	// Substituindo as movimentações das peças por funções recursivas.

	// Exemplo: Uma função recursiva para o movimento do Bispo.

	printf("\nBispo movendo-se na diagonal.\n");
	for (int i = 1; i <= movimentoBispo; i++)
	{
		bispoLoop(i);
		direita = i;
		printf("Direita.\n");
	}

	printf("\n\n");

	// Movimentação da Torre
	// Utilizano uma Loop recursivo para simular a movimentação da Torre para a direita.

	printf("Torre movendo-se para a direita.\n");
	torreLoop(movimentoTorre);
	printf("\n\n");

	// Movimentação da Rainha
	// para simular a movimentação da Rainha para a esquerda.

	printf("Dama movendo-se para a esquerda.\n");
	damaLoop(movimentoDama);
	printf("\n\n");

	// printf("Dama está na posição incial\n");

	// for (int i=1; i<5; i++) {
	//	printf("Dama se move e está na posição %d.\n", i);
	//	movimentoDama = i;
	// }

	// printf("Dama está agora na posição %d.\n\n", movimentoDama+1);

	// ----------- Movimentação do Cavalo-------------
	// simular a movimentação do Cavalo em L.
	// Um loop pode representar a movimentação horizontal e outro vertical.
	// Implemente a movimentação do Cavalo utilizando loops com variáveis
	// múltiplas e condições avançadas. Inclua o uso de continue e break dentro dos
	// loops.

	do
	{
		direita = 0;
		direita++;
		printf("Movendo Cavalo para cima e à direita.\n\n");

		while (movimentoCavalo > 1)
		{
			movimentoCavalo--;
			printf("Cima\n");
			cima++;
			if (cima == 2)
			{
				break; // Pula a última iteração para evitar imprimir "Cima" novamente
			}
		}
		printf("Direita\n");
		printf("Cavalo movido %d posições acima e ", movimentoCavalo = cima);
	} while (direita < 1);

	printf("movido %d posiçao à direita.\n\n", direita);

	return 0;
}