#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"

void title(){
    printf("========================================\n");
    printf("========== SISTEMA DE ESTOQUE ==========\n");
    printf("========================================\n\n");
}

int menu(){
    int opcao;
    printf("=== MENU ===\n");
    printf("[1] Cadastrar produtos\n");
    printf("[2] Listar todos os produtos\n");
    printf("[3] Buscar produto\n");
    printf("[4] Ordenar e exibir produtos por preço\n");
    printf("[5] Sair\n");
    printf("Insira sua opção: ");
    scanf("%d", &opcao);
    return opcao;
}

prod *criarLista (int *n){
    int c;

    printf("Informe quantos produtos serão cadastrados: ");
    scanf("%d", n);
    while((c = getchar()) != '\n' && c != EOF);

    prod *lista = malloc((*n) * sizeof(prod));
    if(lista == NULL){
        printf("\n[ERRO AO ALOCAR MEMÓRIA]\n");
        return NULL;
    }
    return lista;
}

void cadProduto(prod *lista, int n){
    int cont, c;
    for(cont = 0; cont < n; cont++){
        printf("\n=== Produto nº%d ===\n", cont + 1);

        printf("Informe o nome do produto: ");
        fgets(lista[cont].nome, 49, stdin);
        lista[cont].nome[strcspn(lista[cont].nome, "\n")] = '\0';

        printf("Informe o preço do produto: ");
        scanf("%f", &lista[cont].preco);
        while((c = getchar()) != '\n' && c != EOF);

        printf("Informe a quantidade em estoque do produto: ");
        scanf("%d", &lista[cont].qnt);
    }
}