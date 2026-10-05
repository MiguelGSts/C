#include "estoque.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#ifndef _WIN32
    #include <windows.h>
#endif


int main(){
    setlocale(LC_ALL, ".UTF8");
    #ifndef _WIN32
        SetConsoleOutputCP(CP_UTF8);
    #endif

    int op, n;
    prod *lista = NULL;

    do{
        title();
        
        op = menu();
        if(op == 1){
            lista = criarLista(&n);
            if(lista == NULL){
                return 1;
            }
            cadProduto(lista, n);
        }
    }while(op != 5);

    return 0;
}