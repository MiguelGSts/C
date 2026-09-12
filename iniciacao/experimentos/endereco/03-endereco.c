#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
void incrementarPorValor(int numero){
    numero++;

    printf("Dentro de incrementarPorValor: %d\n", numero);
}
void incrementarPorEndereco(int *numero){
    (*numero)++;

    printf("Dentro de incrementarPorEndereco: %d\n", *numero);
}
int title(){
	printf("========\n");
	printf("ENDEREÇO\n");
	printf("========\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, ".UTF8");
	SetConsoleOutputCP(CP_UTF8);
	
	// Variáveis
	int valor= 5;
	//=====================================
    title();
	printf("Valor inicial: %d\n", valor);

    incrementarPorValor(valor);
    printf("Valor após incrementarPorValor: %d\n", valor);
    incrementarPorEndereco(&valor);	
	printf("Valor após incrementarPorEndereco: %d\n", valor);
	printf("[FIM DO PROGRAMA]");
	return 0;
}