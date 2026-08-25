#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int topo(){
	printf("============ \n");
	printf("Estudos de C \n");
	printf("============ \n");
}
int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	
	topo();	
    printf("=== MENU PRINCIPAL ===\n");
    printf("== ESCOLHA O DIA DA SEMANA ==\n");
	printf("1 - DOMINGO\n");
	printf("2 - SEGUNDA-FEIRA\n");
	printf("3 - TERÇA-FEIRA\n");
	printf("4 - QUARTA-FEIRA\n");
	printf("5 - QUINTA-FEIRA\n");
	printf("6 - SEXTA-FEIRA\n");
	printf("7 - SÁBADO\n");
	
	
	printf("\n Escolha uma opção");
	scanf("%i", opcao);
	
		switch(opcao){
        case 1:
             printf("\nVoc� escolheu domingo.\n");
             break;
        case 2:
             printf("\nVoc� escolheu segunda-feira.\n");
             break;
        case 3:
             printf("\nVoc� escolheu ter�a-feira.\n");
             break;
        case 4:
             printf("\nVoc� escolheu quarta-feira.\n");
             break;
        case 5:
             printf("\nVoc� escolheu quinta-feira.\n");
             break;
        case 6:
             printf("\nVoc� escolheu sexta-feira.\n");
             break;
        case 7:
             printf("\nVoc� escolheu s�bado.\n");
             break;
        default:
             printf("\nEscolha inv�lida.\n");    
    }
    return 0; 
}
