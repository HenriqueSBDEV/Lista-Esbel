#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 4

double valorMedioG(double x[]);
double desvioPadraoG(double x[]);

int main(int argc, char *argv[]) {
	double x[N], desvio;
	int i;
	for(i = 0; i < N; i++){
		printf("Digite o valor para a posicao [%d]", i);
		scanf("%lf", &x[i]);
	}
	desvio = desvioPadraoG(x);
	printf("%lf", desvio);
	return 0;
}

double desvioPadraoG(double x[]){
	int i = 0;
	double soma = 0, desvio = 0;
	double media = valorMedioG(x);
	for(i = 0; i < N; i++){
		if(x[i] > media){
			x[i] = x[i] - media;
		}else{
			x[i] = media - x[i];
		}
		x[i] = pow(x[i], 2);
		soma = soma + x[i];
	}
	desvio = sqrt((soma / N) * 1.0);
	return desvio;
}

double valorMedioG(double x[]){
	double media = 0;
	int i;
	for(i = 0; i < N; i++){
		media = media + x[i];
	}
	return (media / N) * 1.0;
}
