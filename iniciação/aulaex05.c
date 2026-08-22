#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Atividade pra casa:
//Crie um programa que leia o código de um produto, o preço, o tipo do produto e quantidade comprada.
//Depois mostre o valor total da compra e descrição do produto.
//----------------------------------------------------------------------------------------------------
int main (){
	setlocale(LC_ALL, "Portuguese");
//declaração de variáveis
	float valor_ini, desconto, montante;
//-----------------------
	printf("Qual o valor do produto? ");
	scanf("%f", &valor_ini);
	printf("Qual o desconto que será aplicado? ");
	scanf("%f", &desconto);
	system("CLS");
	montante = valor_ini - (valor_ini*desconto/100);
	printf("Levando em consideração o valor original do produto de R$ %.2f e o desconto de %.1f%%:\n", valor_ini, desconto);
	printf("O valor final será de: R$ %.2f", montante);
	
 return 0;	
}
