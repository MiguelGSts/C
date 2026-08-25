#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");

	char nome[100];
    int opcao;
    float valorCompra = 0;
    float valorFinal = 0;

    printf("=== SISTEMA DE PAGAMENTO===\n");
    printf("\n Digite o nome completo do cliente: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    printf("\nDigite o valor da compra: ");
    scanf("%f", &valorCompra);
    
    printf("\n=== FORMAS DE PAGAMENTO ===\n");
    printf("1 - PIX: 10%% de desconto\n");
    printf("2 - DINHEIRO: 5%% de desconto\n");
    printf("3 - CARTÃO DE DÉBITO: valor normal\n");
    printf("4 - CARTÃO DE CRÉDITO: 8%% de acréscimo\n");
    printf("Escolha a forma de pagamento: ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nFORMA DE PAGAMENTO ESCOLHIDA: PIX.\n");
        valorFinal = valorCompra - (valorCompra * 0.10);
        break;
    case 2:
        printf("\nFORMA DE PAGAMENTO ESCOLHIDA: DINHEIRO.\n");
        valorFinal = valorCompra - (valorCompra * 0.05);
        break;
    case 3:
        printf("\nFORMA DE PAGAMENTO ESCOLHIDA: CARTÃO DE DÉBITO.\n");
        valorFinal = valorCompra;
        break;
    case 4:
        printf("\nFORMA DE PAGAMENTO ESCOLHIDA: CARTÃO DE CRÉDITO.\n");
        valorFinal = valorCompra + (valorCompra * 0.08);
        break;
    default:
        break;
    }
    if (valorFinal > 0){
        printf("NOME DO CLIENTE: %s\n", nome);
        printf("VALOR DA COMPRA: %.2f\n", valorCompra);
        printf("FORMA DE PAGAMENTO: %i\n", opcao);
        printf("VALOR FINAL DA COMPRA: %.2f\n", valorFinal);
    }
    return 0;
}