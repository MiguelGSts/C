#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int title(){
	printf("====================\n");
	printf("CONTA DO RESTAURANTE\n");
	printf("====================\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	// Variáveis
	float cons, taxa, valTot, valPers;
	int pers;
	//==================================
	
	title();
	printf("Qual o valor do consumo: ");
	scanf("%f", &cons);
	printf("Quantas pessoas irão dividir a conta: ");
	scanf("%i", &pers);
	taxa = cons * 0.10;
	valTot = cons + taxa;
	valPers = valTot / pers;

	system("CLS");
	title();	
	printf("\n=== CONTA ===\n");
	printf("CONSUMO: R$ %.2f\n", cons);
	printf("PESSOAS: R$ %i\n", pers);
	printf("VALOR DA TAXA [10%%]: R$ %.2f\n", taxa);
	printf("VALOR TOTAL: R$ %.2f\n", valTot);
	printf("VALOR P/PESSOA: R$ %.2f\n", valPers);
	
	return 0;
}
