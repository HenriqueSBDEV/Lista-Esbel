#include <stdio.h>
#include <stdlib.h>

double valorMedioG(double x[], int n);
double desvioPadraoG(double x[], int n);

int main(int argc, char *argv[]) {
	int i, n;
	printf("Digite o tamanho:\n");
	scanf("%d", &n);
	double x[n], desvio;
	for(i = 0; i < n; i++){
		printf("Digite o valor para a posicao [%d]", i);
		scanf("%lf", &x[i]);
	}
	desvio = desvioPadraoG(x, n);
	printf("%lf", desvio);
	return 0;
}

double desvioPadraoG(double x[], int n){
	int i = 0;
	double soma = 0, desvio = 0;
	double media = valorMedioG(x, n);
	for(i = 0; i < n; i++){
		if(x[i] > media){
			x[i] = x[i] - media;
		}else{
			x[i] = media - x[i];
		}
		x[i] = pow(x[i], 2);
		soma = soma + x[i];
	}
	desvio = sqrt((soma / n) * 1.0);
	return desvio;
}

double valorMedioG(double x[], int n){
	double media = 0;
	int i;
	for(i = 0; i < n; i++){
		media = media + x[i];
	}
	return (media / n) * 1.0;
}
