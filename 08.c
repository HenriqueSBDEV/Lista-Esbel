#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

/*Implemente uma função para calcular o valor médio de um conjunto de valores armazenados
em um array de valores de tipo double. O cabeçalho da função deve ser:
double valorMedioG(double x[ ]); A quantidade de elementos no array é armazenada na variável 
global, N, declarada como sendo de tipo int. Implemente uma aplicação que demonstra a aplicação da função.*/

#define N 5

int main(int argc, char *argv[]) {
	double x[N];
	int i;
	for(i = 0; i < N; i++){
		printf("Digite o valor para a posicao [%d]", i);
		scanf("%lf", &x[i]);
	}
	valorMedioG(x);
	return 0;
}

