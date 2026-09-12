#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
int contador = 0;
int quadrado(int numero){
    return numero * numero;
}
void registrar(void){
    contador++;
}
void exibirMensagem(void){
    printf("Processamento concluído\n");
}
void title(void){
	printf("=======\n");
	printf("EFEITOS\n");
	printf("=======\n");
}
int main(){
	setlocale (LC_ALL, ".UTF8");
	SetConsoleOutputCP(CP_UTF8);
	
	// Variáveis
	int resultado;
	//=====================================
    title();
	resultado = quadrado(5);
    printf("Resultado: %d\n", resultado);
    printf("Contador antes: %d\n", contador);
	
    registrar();
    
    printf("Contador depois: %d\n", contador);

    exibirMensagem();
	
	printf("[FIM DO PROGRAMA]");
	return 0;
}