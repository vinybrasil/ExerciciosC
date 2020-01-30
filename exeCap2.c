// 
#include <stdio.h>
#include <conio.h>
#include <math.h> 

int main() {
	float num1, num2, j, d, k;
	int ano; 
	printf("Execicio 2.1: operadores logicos \n");
	printf("%d %d %d %d", !3, !0, 3+'a'>'b'+2 && !'b', 1 || !2 && 3);
	getch();
	printf("\nExercicio 2.2: qual o maior numero?");
	
	printf("\nDigite um numero: \n");
	scanf("%f", &num1);
	printf("\nDigite outro numero: \n");
	scanf("%f", &num2);
	//printf("%c %c", num1, num2);
	if (num1 > num2){
		printf("%f eh maior que %f", num1, num2);
		}
	else if (num1 < num2){
		printf("%f eh maior que %f", num2, num1);
	}
	else {
		printf("os numeros sao iguais ou nao sao numeros.");}
	getch();
	
	printf("\nExercicio 2.3: saber se um ano eh bissexto");
	printf("\nInsira um ano:\n");
	
	scanf("%f", &ano);
	printf("%f \n", ano); 
	j = 0.0; 
	 //CARALHO PQ NAO FUNCIONA LIXO
	d = ano % 100;
	k = ano % 4;
	printf("%f\n", k);
	printf("%f\n", d);
	if (k = j && d != j){
			printf("O ano eh bissexto");
		}
	else printf("o ano nao eh bissexto ou a entrada foi invalida");
	printf("\n*o exercicio 2.4 foi feito no pdf");
	printf("\nExercicio 2.4");
	
	return 0;
}