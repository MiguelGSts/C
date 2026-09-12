#include "operacoes.h"

int main(void) {
    int opcao;
    int quantidade;
    int quantidadeProcessada = 0;

    float preco, total, finalTotal = 0;

    do {
        exibirMenu();

        opcao = obterOpcaoValida();

        if (opcao != 0) {
            quantidade = obterQuantidadeValida();

            preco = identificarPreco(opcao);

            total = calcularTotal(quantidade, preco);
            finalTotal = finalTotal + total;
            quantidadeProcessada++;

            exibirResultado(total);
        }
        
    } while (opcao != 0);

    exibirResumoFinal(quantidadeProcessada, finalTotal);

    return 0;
}