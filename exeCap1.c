#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	float nota1, nota2, mean, distancia, litros, gasto;
	char str;
	printf("Exercicio 1.3: calcular a media \n");
	printf("Digite as notas do aluno: ");
	scanf("%f", &nota1);
	printf("Digite as notas do aluno: ");
	scanf("%f", &nota2);
	mean = (nota1 + nota2)/2;
	printf("A media e: %f", mean);
	//getch();
	printf("\n========Exercicio 1.4: calcular o consumo medio==========\n");
	printf("Digite a distancia:  \n");
	scanf("%f", &distancia);
	printf("Digite a quantidade de litros de gasolina gastas no percurso: \n");
	scanf("%f", &litros); 
	gasto = litros/distancia;
	printf("A media de gasto por litro eh: %f", gasto);
	getch();
	printf("Exercicio 1.5: escrever em oct, dec e hex\n");
	printf("Digite uma letra: ");
	scanf("%s", &str);
	//só nao ta funcionando esta parte
	printf("%o %d %s", str, str, str);
	getch();
	return 0;
}
