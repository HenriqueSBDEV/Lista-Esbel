#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

/*Implemente uma fun��o para calcular o valor m�dio de um conjunto de valores armazenados
em um array de valores de tipo double. O cabe�alho da fun��o deve ser:
double valorMedioG(double x[ ]); A quantidade de elementos no array � armazenada na vari�vel 
global, N, declarada como sendo de tipo int. Implemente uma aplica��o que demonstra a aplica��o da fun��o.*/

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

