#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
int dobrar(int numero){
    return numero * 2;
}
int title(){
	printf("=======\n");
	printf("RETORNO\n");
	printf("=======\n");
	
	return 0;
}
int main(){
	setlocale (LC_ALL, ".UTF8");
	SetConsoleOutputCP(CP_UTF8);
	
	// Variáveis
	int valor = 5;
	//=====================================
	title();
    printf("Valor inicial antes da chamada: %d\n", valor);

    dobrar(valor);
    
    printf("Valor após chamar sem atribuir: %d\n", valor);
	
	valor = dobrar(valor);

    printf("Valor após atribuir o retorno: %d\n", valor);
    
	printf("[FIM DO PROGRAMA]");
	return 0;
}