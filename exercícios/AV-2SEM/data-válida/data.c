#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
int main(void){
    setlocale(LC_ALL, ".UTF8");
    SetConsoleOutputCP(CP_UTF8);

    //VARIÁVEIS
    int numMES, numDIA, diaMES;


    printf("Digite o número do mês: ");
    scanf("%d", &numMES);
    printf("Digite o dia: ");
    scanf("%d", &numDIA);

    switch(numMES){
        case 1:
        diaMES = 31;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 2:
        diaMES = 28;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 3:
        diaMES = 31;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 4:
        diaMES = 30;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 5:
        diaMES = 31;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 6:
        diaMES = 30;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 7:
        diaMES = 31;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 8:
        diaMES = 31;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 9:
        diaMES = 30;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 10:
        diaMES = 31;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 11:
        diaMES = 30;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }
        break;

        case 12:
        diaMES = 31;
        if(diaMES < numDIA){
            printf("Data inválida");
        }else{
            printf("Data válida");
        }   
        break;

        default:
        printf("Mês inválido");
    }

    return 0;
}