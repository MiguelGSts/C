#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){
    setlocale(LC_ALL, ".UTF8");
    SetConsoleOutputCP(CP_UTF8);

    //VARIÁVEIS
    char PT[50], ST[50];
    int PteamGP, SteamGP, PteamGS, SteamGS, TotalGPT, TotalGST;
    int diferencaPT = 0, diferencaST = 0;
    printf("Informe o nome do primeiro time: ");
    scanf("%s", PT);
    printf("Informe o nome do segundo time: ");
    scanf("%s", ST);
    printf("Informe a quantidade de gols de %s no primeiro tempo: ", PT);
    scanf("%d", &PteamGP);
    printf("Agora informe a quantidade de gols de %s no primeiro tempo: ", ST);
    scanf("%d", &SteamGP);
    printf("Informe a quantidade de gols de %s no segundo tempo: ", PT);
    scanf("%d", &PteamGS);
    printf("Agora informe a quantidade de gols de %s no segundo tempo: ", ST);
    scanf("%d", &SteamGS);
    TotalGPT = PteamGP + PteamGS;
    TotalGST = SteamGP + SteamGS;
    printf("%s %d X %d %s\n", PT, TotalGPT, TotalGST, ST);
    if(TotalGPT > TotalGST){
        printf("Vencedor: %s\n", PT);
        printf("Placar Final: %d X %d\n", TotalGPT, TotalGST);
        diferencaPT = TotalGPT - TotalGST;
    }else if (TotalGST > TotalGPT){
        printf("Vencedor: %s\n", ST);
        printf("Placar Final: %d X %d\n", TotalGST, TotalGPT);
        diferencaST = TotalGST - TotalGPT;
    }
    if(diferencaPT == 1 || diferencaST == 1){
        printf("Vitória apertada!\n");
    }else if(diferencaPT == 2 || diferencaST == 2){
        printf("Vitória confortável!\n");
    }else if(diferencaPT >= 3 || diferencaST >= 3){
        printf("Goleada!\n");
    }else if(TotalGPT == 0 && TotalGST == 0){
        printf("Empate sem gols.");
    }else if(diferencaPT == 0 && diferencaST == 0){
        printf("Empate com gols.");
    }

    return 0;
}