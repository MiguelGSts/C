#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
//declaração de variaveis
	int idade;
	char conceito;
//-----------------------
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Sua idade é: %d \n", idade);
	
	printf("Digite o conceito: ");
	scanf(" %c", &conceito);
	printf("Seu conceito é: %c", conceito);
	return 0;
}
