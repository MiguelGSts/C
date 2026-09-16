#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
void menu(void){
    printf("[1] Pedra\n");
    printf("[2] Papel\n");
    printf("[3] Tesoura\n");
}
int main(void){
    setlocale(LC_ALL, ".UTF8");
    SetConsoleOutputCP(CP_UTF8);

    //VARIÁVEIS
    int opJ1, opJ2;

    menu();
    printf("Informe a escolha do Jogador 1: ");
    scanf("%d", &opJ1);
    switch(opJ1){
        case 1:
        printf("Opção escolhida: Pedra\n");
        break;
        
        case 2:
        printf("Opção escolhida: Papel\n");
        break;

        case 3:
        printf("Opção escolhida: Tesoura\n");
        break;

        default:
        while(opJ1 < 1 || opJ1 > 3){
        printf("Opção inválida, insira novamente: ");
        scanf("%d", &opJ1);
        }
    }
    menu();
    printf("Informe a escolha do Jogador 2: ");
    scanf("%d", &opJ2);
    switch(opJ2){
        case 1:
        printf("Opção escolhida: Pedra\n");
        break;
        
        case 2:
        printf("Opção escolhida: Papel\n");
        break;

        case 3:
        printf("Opção escolhida: Tesoura\n");
        break;

        default:
        while(opJ2 < 1 || opJ2 > 3){
        printf("Opção inválida, insira novamente: ");
        scanf("%d", &opJ2);
        }
    }
    if(opJ1 == opJ2){
        printf("Empate!");
    }
    if(opJ1 == 1){
        if(opJ2 == 2){
            printf("Jogador 2 venceu!");
        }else if(opJ2 == 3){
            printf("Jogador 1 venceu!");
        }
    }else if(opJ1 == 2){
        if(opJ2 == 1){
            printf("Jogador 1 venceu!");
        }else if(opJ2 == 3){
            printf("Jogador 2 venceu!");
        }
    }else if(opJ1 == 3){
        if(opJ2 == 1){
            printf("Jogador 2 venceu!");
        }else if(opJ2 == 2){
            printf("Jogador 1 venceu!");
        }
    }
    return 0;
}