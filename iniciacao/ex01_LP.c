#include <stdio.h>
#include <locale.h>
int main(void){
    //UTF-8
    system("chcp 65001 > nul");
    setlocale(LC_ALL, "Portuguese");
    //--------------------------------

    // Variáveis
    int quantidade;
    float preco, total;
    //------------------

    printf("Digite a quantidade dos produtos: ");
    scanf("%i", &quantidade);
    printf("Digite o preço dos produtos: ");
    scanf("%f", &preco);
    total = quantidade * preco;
    printf("Total da compra: %.2f\n", total);

    return 0; 
}