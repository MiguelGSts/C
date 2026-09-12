#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
void incrementar(int numero){
    printf("Dentro, antes: %d\n", numero);

    numero++;

    printf("Dentro, depois: %d\n", numero);
}
int title(void){
	printf("==========\n");
	printf("Incremento\n");
	printf("==========\n");
	
	return 0;
}
int main(void){
	setlocale (LC_ALL, ".UTF8");
	SetConsoleOutputCP(CP_UTF8);
	
	// Variáveis
	int valor = 5;
	//=====================================
	title();
	printf("Antes da chamada: %d\n", valor);

	incrementar(valor);

    printf("Depois da chamada: %d\n", valor);
	
	printf("[FIM DO PROGRAMA]");
	return 0;
}