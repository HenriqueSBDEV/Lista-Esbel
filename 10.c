#include <stdio.h>
#include <stdlib.h>

#define N 5

double valorMedioG(double x[]);
void normaliza(double x_inout[ ]);

int main(int argc, char *argv[]) {
	double x[N], nx[N];
	int i;
	for(i = 0; i < N; i++){
		printf("Digite o valor para a posicao [%d]", i);
		scanf("%lf", &x[i]);
	}
	printf("Vetor normalizado!\n");
	normaliza(x);
	return 0;
}

void normaliza(double x_inout[]){
	int i = 0;
	double media = valorMedioG(x_inout);
	for(i = 0; i < N; i++){
		x_inout[i] = x_inout[i] - media;
		printf("%lf\n", x_inout[i]);
	}
}

double valorMedioG(double x[]){
	double media;
	int i;
	for(i = 0; i < N; i++){
		media = media + x[i];
	}
	return (media / N);
}
