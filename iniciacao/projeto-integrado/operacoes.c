#include <stdio.h>
#include "operacoes.h"

void exibirMenu(void) {
    printf("\n=== CONTROLE DE COMPRAS ===\n");
    printf("1 - Produto comum\n");
    printf("2 - Produto especial\n");
    printf("0 - Encerrar\n");
}

int obterOpcaoValida(void) {
    int opcao;

    printf("Opcao: ");
    scanf("%d", &opcao);

    while (opcao < 0 || opcao > 2) {
        printf("Opcao invalida.\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
    }

    return opcao;
}

int obterQuantidadeValida(void) {
    int quantidade;

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    while (quantidade <= 0) {
        printf("Quantidade invalida.\n");
        printf("Quantidade: ");
        scanf("%d", &quantidade);
    }

    return quantidade;
}

float identificarPreco(int opcao) {
    if (opcao == 1) {
        return 10.0f;
    }

    return 15.0f;
}

float calcularTotal(int quantidade, float preco) {
    return quantidade * preco;
}

void exibirResultado(float total) {
    printf("Total da compra: R$ %.2f\n", total);
}

void exibirResumoFinal(int quantidadeProcessada, float total) {
    printf("\nOperacoes processadas: %d\n", quantidadeProcessada);
    printf("Valor total da compra: %.2f", total);
}