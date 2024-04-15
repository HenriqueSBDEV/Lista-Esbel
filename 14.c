#include <stdio.h>
#include <stdlib.h>

double valorMedioG(double x[], int N);
void normaliza(double x_inout[], int N);

int main(int argc, char *argv[]) {
	int i, N;
	printf("Digite o tamanho do vetor:\n");
	scanf("%d", &N);
	double x[N];
	for(i = 0; i < N; i++){
		printf("Digite o valor para a posicao [%d]", i);
		scanf("%lf", &x[i]);
	}
	printf("Vetor normalizado!\n");
	normaliza(x, N);
	return 0;
}

void normaliza(double x_inout[], int N){
	int i = 0;
	double media = valorMedioG(x_inout, N);
	for(i = 0; i < N; i++){
		x_inout[i] = x_inout[i] - media;
		printf("%lf\n", x_inout[i]);
	}
}

double valorMedioG(double x[], int N){
	double media;
	int i;
	for(i = 0; i < N; i++){
		media = media + x[i];
	}
	return (media / N);
}
