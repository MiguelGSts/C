#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int title(){
	printf("========================\n");
	printf("FORMAÇÃO DE UM TRIÂNGULO\n");
	printf("========================\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	// Variáveis
	float L1, L2, L3;
	//================================
	title();
	printf("Informe o primeiro lado: ");
	scanf("%f", &L1);
	printf("Informe o segundo lado: ");
	scanf("%f", &L2);
	printf("Informe o terceiro lado: ");
	scanf("%f", &L3);
	
	system("CLS");
	title(0);
	if(L1 > L2 + L3 || L2 > L1 + L3 || L3 > L1 + L2){
		printf("\nEsses lados não formam um triângulo.\n");
	}else{
		printf("\nEsses lados formam um triângulo.\n");
	}

	printf("\n[FIM DO PROGRAMA]");
	return 0;
}
