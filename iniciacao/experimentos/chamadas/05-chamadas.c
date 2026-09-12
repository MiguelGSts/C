#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
float calcularSubtotal(int quantidade, float preco){
    return quantidade*preco;
}
float calcularDesconto(float subtotal){
    if (subtotal >= 200.0f){
        return subtotal * 0.10f;
    }
	return 0.0f;
}
float calcularTotal(int quantidade, float preco){
	float subtotal;
	float desconto;

	subtotal = calcularSubtotal(quantidade, preco);
	desconto = calcularDesconto(subtotal);
	return subtotal - desconto;
}
void title(void){
	printf("========\n");
	printf("CHAMADAS\n");
	printf("========\n");
}
int main(void){
	setlocale (LC_ALL, ".UTF8");
	SetConsoleOutputCP(CP_UTF8);
	
	// Variáveis
	float total;
	//=====================================
	title();
	total = calcularTotal(3, 100.0f);

	printf("Total: %.2f\n", total);	
	
	printf("[FIM DO PROGRAMA]");
	return 0;
}