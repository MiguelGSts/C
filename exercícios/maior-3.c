#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int title(){
	printf("==============\n");
	printf("MAIOR DOS TRÊS\n");
	printf("==============\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	// Variáveis
	float N1, N2, N3;
	//================================
	title();
	printf("Informe o primeiro número: ");
	scanf("%f", &N1);
	printf("Informe o segundo número: ");
	scanf("%f", &N2);
	printf("Informe o terceiro número: ");
	scanf("%f", &N3);
	
	if(N1 > N2 && N1 > N3){
		printf("O maior número é: %.1f \n", N1);
	}else if (N2 > N1 && N2 > N3){
		printf("O maior número é: %.1f \n", N2);	
	}else if(N3 > N1 && N3 > N2){
		printf("O maior número é: %.1f \n", N3);
	}
	
	
	printf("\n[FIM DO PROGRAMA]");
	return 0;
}
