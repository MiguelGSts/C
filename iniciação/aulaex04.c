#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
//declaração de variáveis
	float base, altura, area, perimetro;
//-----------------------
	printf("Digite a base do retângulo => ");
	scanf("%f", &base);
	printf("Digite a altura do retângulo => ");
	scanf("%f", &altura);
	system("CLS");
	area = altura*base;
	perimetro = (altura + base) * 2;
	printf("A área e o perímetro do retângulo são respectivamente: %.1f e %.1f", area, perimetro);
	
	return 0;
}
