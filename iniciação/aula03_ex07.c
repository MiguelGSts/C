#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int topo(){
	printf("-------------- \n");
	printf("Estudos de C++ \n");
	printf("-------------- \n");
}
int main(){
	//UTF-8
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	//------------------------------
	//Variáveis
	int idade;
	//------------------------------
	
	topo();
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	if(idade < 12){
		system("CLS");
		topo();
		printf("Você é uma criança. \n");
	}else if(idade < 18){
		system("CLS");
		topo();
		printf("Você é um adolescente. \n");
	}else if(idade < 65){
		system("CLS");
		topo();
		printf("Você é um adulto. \n");
	}else{
		system("CLS");
		topo();
		printf("Você é um idoso. \n");
	}
	
	printf("[Fim do programa]");
	
	return 0;
}
