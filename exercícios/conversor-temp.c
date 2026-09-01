#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	// Variáveis
	int seg, hours, min, sec;
	
	printf("Digite um tempo qualquer em segundos: ");
	scanf("%i", &seg);
	hours = seg / 3600;
	min = seg % 60;
	sec = seg % 60;
	printf("Resultado:\n");
	printf("Hora(as): %i\n", hours);
	printf("Minuto(os): %i\n", min);
	printf("Segundo(os): %i\n", sec);
	
	
	return 0;
}
