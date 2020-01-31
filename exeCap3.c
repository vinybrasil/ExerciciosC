//C0D3D BY L1Z4RB (former N13M4ND)
#include<stdio.h>
#include<math.h>
int main(){
	
	printf("Exercicio 3.2: Incremento \n");
	int x = 5, y;
	y = x++ + ++x;
	printf("%d", y);
//====================================================================================================================================//	
	//int d;
	printf("\nExercicio 3.3: Contagem regressiva \n");
	printf("Insira um numero: maior que zero\n");
	
	int d;
	//scanf("%d", &d);
	for(d=10; d>=1; d--) printf("%d\n", d); //é só colocar d se for o scanf, fiz isso só pra ser mais rapido
	printf("KABUM XD XD");
//====================================================================================================================================//
	printf("\nExercicio 3.4: Polegada para cm \n");
	float pol, cm;
	for(pol=0; pol<=10; pol+=0.5){
		cm = pol * 2.54;
		printf("pol = %f, cm = %f\n", pol, cm);}
	
	float j, ja;
	int a, fatorando, fatorial;
//====================================================================================================================================//
	printf("\nExercicio 3.5: Potencia \n");
	printf("Escreva um numero real:\n");
	//scanf("%f", &j);
	printf("Escreva um numero inteiro:\n");
	//scanf("%d", &a);
	j = 12.2;
	a = 3;
	ja = pow(j,a);
	printf("A potencia dos dois eh: %f\n", ja);
//====================================================================================================================================//
	printf("\nExercicio 3.6: Fatorial \n");
	printf("Escreva um numero inteiro:\n");
	//scanf("%d", &fatorando);
	fatorando = 6;
	fatorial = 1;
	for(fatorando; fatorando>=1; fatorando--) {fatorial *= fatorando;}
	printf("%d\n", fatorial);
//====================================================================================================================================//	
	printf("\nExercicio 3.7: Quadrado do natural pela sima dos n primeiros impares consecutivos \n");
	int wellington, douglas, quad, doug; //a variavel é minha e eu chamo como eu quiser
	printf("Escreva um natural:\n");
	//scanf("%d", &wellington);
	wellington = 5;
	douglas = 1;
	doug = -1;
	quad = 0;
	for(douglas; douglas<=wellington; douglas++) {
		doug += 2;
	quad += doug; }
	//NAO FUNCIONA PRA NEGATIVOS
	printf("O quadrado desse numero pelo metodo dos impares consecutivos eh: %d", quad);
//====================================================================================================================================//
	int num, fib;
	float fim;
	printf("\nExercicio 3.8: Fibonacci\n");
	printf("Digite um numero natural maior ou igual a 3:\n");
	//scanf("%d", num);
	num = 3;
	fib = 1;
	fim = 0.0;
	
	for(fib; fib<=num; fib++) {
		if (fim == 0.0){
			fim = 1;
			printf("PORRA %f\n", fim);}
		if (fim = 1.0){
			fim = 2.0;
			printf("cu");}
		fim += fim;
		printf("%f\n", fim);}
	
	//printf("%d", fim);
	return 0;
	}