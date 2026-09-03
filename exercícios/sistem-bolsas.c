#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int title(){
	printf("==================\n");
	printf("SISTEMAS DE BOLSAS\n");
	printf("==================\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	// Variáveis
	float media, freq, renda;
	//=====================================
	
	title();
	printf("Informe a média do aluno: ");
	if(scanf("%f", &media) != 1){
		printf("\n[VALOR INVÁLIDO]\n");
		return 1;
	}
	printf("Informe a frequência: ");
	if(scanf("%f", &freq) != 1){
		printf("\n[VALOR INVÁLIDO]\n");
		return 1;
	}
	printf("Informe a renda familiar: ");
	if(scanf("%f", &renda) != 1){
		printf("\n[VALOR INVÁLIDO]\n");
		return 1;
	}
	system("CLS");
	
	if (media >= 8 && freq >= 75 && renda <= 4000){
		printf("\nBolsa Aprovada com Sucesso!\n");
	}
	
	printf("[FIM DO PROGRAMA]");
	return 0;
}