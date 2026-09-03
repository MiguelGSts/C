#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
float desconto(float compra){
	if(compra <= 99.99){
		printf("\n[Sem desconto para a compra.]\n");
	}else if(compra <= 199.99){
		printf("\n[Desconto de 5%%.]\n");
		compra = compra - (compra * 0.05);
	}else if (compra <= 499.99){
		printf("\n[Desconto de 10%%.]\n");
		compra = compra - (compra * 0.10);
	}else{
		printf("\n[Desconto de 15%%.]\n");
		compra = compra - (compra * 0.15);
	}
	return compra;
}
int title(){
	printf("==================\n");
	printf("DESCONTO NA COMPRA\n");
	printf("==================\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	// Variáveis
	float valCompra, valTotal;
	//=====================================
	
	title();
	printf("Informe o valor da compra: ");
	scanf("%f", &valCompra);
	if (scanf("%f", &valCompra) != 1){  //Validação de entrada
		printf("\n[ENTRADA DE VALORES INVÁLIDA]\n");
		return 1;
	}
	system("CLS");
	
	title();
	valTotal = desconto(valCompra);
	printf("Valor da compra: R$%.2f\n", valCompra);
	printf("Valor total: R$%.2f\n", valTotal);
	
	printf("[FIM DO PROGRAMA]");
	return 0;
}