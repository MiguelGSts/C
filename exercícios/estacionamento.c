#include <stdio.h>
#include <locale.h>
int menu (int op){
	printf("\n=== ESTACIONAMENTO ===\n");
    printf("1 - Moto\n");
    printf("2 - Carro\n");
    printf("0 - Encerrar\n");
    printf("Opção: ");
    if (scanf("%d", &op) != 1){
        	printf("\n[ENTRADA DE VALORES INVÁLIDA]\n");
			return 1;
	}
	while (op < 0 || op > 2) {
            printf("[OPÇÃO INVÁLIDA] \nDigite novamente: ");
            if (scanf("%d", &op) != 1){
        		printf("\n[ENTRADA DE VALORES INVÁLIDA]\n");
				return 1;
			}
    }
    return op;
}
int hours (int hr){
	printf("Quantidade de horas: ");
    if (scanf("%d", &hr) != 1){
    	printf("\n[ENTRADA DE VALORES INVÁLIDA]\n");
		return 1;
	}

    while (hr <= 0) {
        printf("[QUANTIDADE INVÁLIDA] \nDigite novamente: ");
        if (scanf("%d", &hr) != 1){
    		printf("\n[ENTRADA DE VALORES INVÁLIDA]\n");
			return 1;
		}
    }
    return hr;
}
int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	//Variáveis
    int opcao, horas, quantidadeAtendimentos;
    float valorHora, total, faturamento;
	//===========================================
	
    do {
        opcao = menu(opcao);
        
        if (opcao != 0) {
            horas = hours(horas);
            if (opcao == 1) {
                valorHora = 4.0;
            } else {
                valorHora = 7.0;
            }

            total = horas * valorHora;

            printf("Valor do atendimento: R$ %.2f\n", total);
			
			quantidadeAtendimentos++;
            faturamento += total;
        }
		
        

    } while (opcao != 0);

    printf("\n=== RESUMO ===\n");
    printf("Atendimentos: %d\n", quantidadeAtendimentos);
    printf("Faturamento: R$ %.2f\n", faturamento);

    return 0;
}