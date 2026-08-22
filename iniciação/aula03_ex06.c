#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int operacao(int n1, int n2){
	int soma,sub, multi,resto;
	float div;
	
	soma = n1 + n2;
	sub = n1 - n2;
	multi = n1 * n2;
	div = (float) n1 / n2;
	resto = n1 % n2;
	
	printf("A soma dos números é: %i \n", soma);
	printf("A subtração dos números é: %i \n", sub);
	printf("A multiplicação dos números é: %i \n", multi);
	printf("A divisão dos números é: %.2f \n", div); 
	printf("O resto da divisão é: %i \n", resto);
	return 0;
}
int main(){
	//UTF-8
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	//------------------------------
	//Variáveis
	int N1, N2;
	//----------------------------------
	
	printf("Digite o primeiro número: ");
	scanf("%i",  &N1);
	printf("Digite o segundo número: ");
	scanf("%i", &N2);
	
	operacao(N1, N2);
	
	return 0;
}
