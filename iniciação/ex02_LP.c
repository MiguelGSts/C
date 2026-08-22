#include <stdio.h>
#include <locale.h>
int main(void){
    //UTF-8
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");
    //--------------------------------

    //Variáveis
    int quant01, quant02, quant03, tot_quant;
    float preco, valor;
    //---------------------------------------

    printf("Digite a primeira quantidade: ");
    scanf("%i", &quant01);
    printf("Digite a primeira quantidade: ");
    scanf("%i", &quant02);
    printf("Digite a primeira quantidade: ");
    scanf("%i", &quant03);
    tot_quant = quant01 + quant02 + quant03;

    if (tot_quant <= 10){
			preco = 1.0;
			valor = tot_quant * preco;
			printf ("O valor total da impressão ficará: %f", valor, "\n");
    }else if (tot_quant <= 30){
        preco = 0.75;
        valor = tot_quant * preco;
		printf ("O valor total da impressão ficará: %f", valor, "\n");
    }else if (tot_quant <= 99){
        preco = 0.50;
        valor = tot_quant * preco;
		printf ("O valor total da impressão ficará: %f", valor, "\n");
    }else{
        preco = 0.25;
        valor = tot_quant * preco;
		printf ("O valor total da impressão ficará: %f", valor, "\n");
    }
    printf("[FIM DO PROGRAMA DE IMPRESSÃO]");
    return 0;
}