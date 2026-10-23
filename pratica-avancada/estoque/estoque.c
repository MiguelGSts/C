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
    int opcao,c;
    printf("=== MENU ===\n");
    printf("[1] Cadastrar produtos\n");
    printf("[2] Listar todos os produtos\n");
    printf("[3] Buscar produto\n");
    printf("[4] Ordenar e exibir produtos por preço\n");
    printf("[5] Sair\n");
    printf("Insira sua opção: ");
    scanf("%d", &opcao);
    while((c = getchar()) != '\n' && c != EOF);
    return opcao;
}

void erroLista(){
        printf("[ERRO] Lista ausente!\n");
        getchar();
}
prod *criarLista (int *n){
    int c;
    limpa_title();
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

void listaProd(prod *lista, int n){
    int cont;
    for(cont=0; cont<n; cont++){
        printf("\n=== Produto nº%d ===\n", cont + 1);
        printf("Nome: %s\n", lista[cont].nome);
        printf("Preço: R$%.2f\n", lista[cont].preco);
        printf("Quantidade em estoque: %d\n", lista[cont].qnt);
    }
    getchar();
}

void limpaTela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void limpa_title(){
    limpaTela();
    title();
}

void buscaProd(prod *lista, int n){
    int cont, i=0;
    int resultado;
    char busca[50];

    printf("\nDigite o nome do produto: ");
    fgets(busca, 49, stdin);
    busca[strcspn(busca, "\n")] = '\0';
    for(cont=0; cont<n; cont++){
        resultado = strcmp(busca, lista[cont].nome);
        if(resultado == 0 && i != 1){
            limpa_title();
            printf("\n== Item(ns) encontrado(s) ==\n");
            i++;
        }
        if(resultado == 0){
            printf("Nome: %s\n", lista[cont].nome);
            printf("Preço: %.2f\n", lista[cont].preco);
            printf("Quantidade em estoque: %d\n\n", lista[cont].qnt);
        }
    }
    getchar();
}

prod *ordenaLista(prod *lista, int n){
    int i, j;
    int swap;
    prod temp;

    prod *listaAlternativa = malloc(n * sizeof(prod));
    if(listaAlternativa == NULL){
        return NULL;
    }
    memcpy(listaAlternativa, lista, n * sizeof(prod));

    for(i = 0; i < n-1; i++){
        swap = 0;
        for (j = 0; j < n-1; j++){
            if(listaAlternativa[j].preco > listaAlternativa[j+1].preco){
                temp = listaAlternativa[j+1];
                listaAlternativa[j+1] = listaAlternativa[j];
                listaAlternativa[j] = temp;
                swap++;
            }
        }
        if(swap == 0){
            break;
        }
    }
    
    return listaAlternativa;
}

void mostraOrdenada(prod *lista, int n){
    int cont;

    prod *listaOrdenada = malloc(n * sizeof(prod));

    listaOrdenada = ordenaLista(lista, n);
    printf("=> Listagem dos produtos, do MAIOR para o MENOR.\n\n");
    for(cont=0; cont<n; cont++){
        printf("\n== Produto %d ==\n", (cont+1));
        printf("=> Nome: %s\n", listaOrdenada[cont].nome);
        printf("=> Preço: %.2f\n", listaOrdenada[cont].preco);
        printf("=> Quantidade em estoque: %d\n", listaOrdenada[cont].qnt);
    }
    printf("\n=== FIM DOS PRODUTOS ===\n");
    getchar();
}