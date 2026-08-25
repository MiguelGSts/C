#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int topo(void){
	printf("============ \n");
	printf("Estudos de C \n");
	printf("============ \n");
    return 0;
}
int main(){
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");

	int opcao, quantidade;
    float preco = 0;
    float total;
	
	topo();	
    printf("=== CARDÁPIO ===\n");
	printf("1 - Hambúrguer . . . . R$ 18,00\n");
	printf("2 - Cachorro-quente . . . . R$ 12,00\n");
	printf("3 - Batata frita . . . . R$ 10,00\n");
	printf("4 - Refrigerante . . . . R$ 6,00\n");

    printf("Escolha uma opção: ");
    scanf("%i", &opcao);
    printf("Digite a quantidade: ");
    scanf("%i", &quantidade);
	
    switch (opcao)
    {
    case 1:
        printf("\nProduto escolhido: Hambúrguer");
        preco = 18;
        break;
    case 2:
        printf("\nProduto escolhido: Cachorro quente");
        preco = 12;
        break;
    case 3:
        printf("\nProduto escolhido: Batata frita");
        preco = 10;
        break;
    case 4:
        printf("\nProduto escolhido: Refrigerante");
        preco = 6;
        break;
    default:
        break;
    }
    if (preco > 0){
        total = preco * quantidade;
        printf("\nPreço unitário: R$ %.2f\n", preco);
        printf("Quantidade: %i\n", quantidade);
        printf("Valor total da compra: %.2f\n", total);
    }

    return 0;
}