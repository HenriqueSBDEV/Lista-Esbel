#include <stdio.h>
#include <stdlib.h>

double media(double v[], int quant, int i);

int main(int argc, char *argv[]) {
	double v[4] = {2.0, 0, 0, 0};
	media(v, 4, 0);
	printf("%lf", (media(v, 4, 1)) / 4.0);
	return 0;
}

double media(double v[], int quant, int i){
	if(i < quant){
		return v[0] + media(v + 1, quant, i + 1);	
	}else{
		return 1;
	}
}
