#ifndef ESTOQUE_H
#define ESTOQUE_H

typedef struct {
    char nome[50];
    float preco;
    int qnt;
} prod;

void title();

int menu();

prod *criarLista (int *n);

void cadProduto(prod *lista, int n);


#endif