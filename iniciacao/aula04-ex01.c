#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int topo(){
	printf("============ \n");
	printf("Estudos de C \n");
	printf("=============\n");
}
int main(){
	//UTF-8
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	//------------------------------
	//Vari�veis
	int opcao;
	
	//--------------------------
	
	topo();
	printf("=== MENU PRINCIPAL ===\n");
	printf("1 - CADASTRAR USU�RIO\n");
	printf("2 - CONSULTAR USU�RIO\n");
	printf("3 - EXCLUIR USU�RIO\n");
	printf("4 - SAIR\n");
	
	printf("\n Escolha uma op��o");
	scanf("%i", opcao);
	
	switch(opcao){
        case 1:
             printf("\nVoc� escolheu cadastrar um usu�rio.\n");
             break;
        case 2:
             printf("\nVoc� escolheu consultar um usu�rio.\n");
             break;
        case 3:
             printf("\nVoc� escolheu excluir um usu�rio.\n");
             break;
        case 4:
             printf("\nVoc� escolheu sair do programa.\n");
        default:
                printf("\nEscolha inv�lida.\n");    
    }
	
	
	return 0;
}
