#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int title(){
	printf("==================\n");
	printf("ÁREA DE UM TERRENO\n");
	printf("==================\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	// Variáveis
	float larg, comp, area, custo;
	//================================
	title();
	printf("Informe a largura do terreno: ");
	scanf("%f", &larg);
	printf("Informe o comprimento do terreno: ");
	scanf("%f", &comp);
	area = larg * comp;
	custo = area * 18.5;
	system("CLS");
	title();
	printf("\nLARGURA DO TERRENO: %.1fm \n", larg);
	printf("COMPRIMENTO DO TERRENO: %.1fm \n", comp);
	printf("ÁREA DO TERRENO: %.2fm² \n", area);
	printf("CUSTO PARA COBRIR O TERRENO (R$18,50/m²): R$%.2f \n", custo);
	
	printf("[FIM DO PROGRAMA]");
	return 0;
}
