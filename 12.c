#include <stdio.h>
#include <stdlib.h>

double valorMedioG(double x[], int n);

int main(int argc, char *argv[]) {
	int i, n;
	printf("Digite qual vai ser o tamanho do vetor:\n");
	scanf("%d", &n);
	double x[n];
	for(i = 0; i < n; i++){
		printf("Digite o valor para a posicao [%d]", i);
		scanf("%lf", &x[i]);
	}
	valorMedioG(x, n);
	return 0;
}

double valorMedioG(double x[], int n){
	double media;
	int i;
	for(i = 0; i < n; i++){
		media = media + x[i];
	}
	return printf("%lf", media / n);
}
