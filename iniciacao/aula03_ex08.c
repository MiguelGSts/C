#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int topo(){
	printf("------------\n");
	printf("Estudos de C\n");
	printf("------------\n");
}
int main(){
	//UTF-8
	system("chcp 65001 > nul");
	setlocale(LC_ALL, "Portuguese");
	//------------------------------
	//Vari�veis
	float n1, n2, n3, n4, med;
	char nome[50], curso[150];
	//------------------------------
	
	topo();
	printf("Informe o nome do aluno: ");
	scanf("%s", &nome);
	printf("Informe o curso: ");
	scanf("%s", &curso);
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	med = (n1 + n2 + n3 + n4)/ 4;
	if (med >= 7){
		system("CLS");
		topo();
		printf("O aluno %s do curso de %s est� APROVADO. Sua nota foi: %.2f", nome, curso, med);
	}else if(med >= 5){
		system("CLS");
		topo();
		printf("O aluno %s do curso de %s est� de RECUPERA��O. Sua nota foi: %.2f", nome, curso, med);
	}else{
		system("CLS");
		topo();
		printf("O aluno %s do curso de %s est� REPROVADO. Sua nota foi: %.2f", nome, curso, med);
	}
	
	return 0;
}
