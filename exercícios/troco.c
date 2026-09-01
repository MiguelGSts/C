#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int title(){
	printf("===================\n");
	printf("PAGAMENTO DO CLIETE\n");
	printf("===================\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, "Portuguese");
	
	// Variáveis
	float valCompra, valPag, troco;
	//================================
	
	title();
	printf("Qual foi o valor total da compra: ");
	scanf("%f", &valCompra);
	printf("Qual foi o valor pago pelo cliente: ");
	scanf("%f", &valPag);
	troco = valPag - valCompra;
	system("CLS");
	title();
	if (troco > 0){
		printf("PAGAMENTO REALIZADO COM SUCESSO!\n");
		printf("TROCO: R$%.2f\n", troco);
	}else if(troco == 0){
		printf("PAGAMENTO REALIZADO COM SUCESSO!\n");
		printf("NÃO HÁ TROCO.\n");
	}else{
		troco = troco * -1;
		printf("PAGAMENTO INSUFICIENTE!\n");
		printf("VALOR FALTANTE: R$%.2f\n", troco);
	}
	printf("[FIM DO PROGRAMA]");
	return 0;
}
