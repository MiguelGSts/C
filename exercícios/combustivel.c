#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int title(){
	printf("======================\n");
	printf("CONSUMO DE COMBUSTÍVEL\n");
	printf("======================\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	// Variáveis
	float km, lit, cons;
	//================================
	title();
	printf("Qual foi a distância percorrida em (Km): ");
	scanf("%f", &km);
	printf("Quantos litros foram consumidos: ");
	scanf("%f", &lit);
	cons = km / lit;
	system("CLS");
	title();
	if (cons < 8){
		printf("CONSUMO: %.2fkm/l \n", cons);
		printf("=>Consumo alto.\n");
	}else if(cons < 12){
		printf("CONSUMO: %.2fkm/l \n", cons);
		printf("=>Consumo médio.\n");
	}else{
		printf("CONSUMO: %.2fkm/l \n", cons);
		printf("=>Consumo econômico.\n");
	}
	
	printf("\n[FIM DO PROGRAMA]");
	return 0;	
}
