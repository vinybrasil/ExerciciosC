#include <bits/stdc++.h>
using namespace std;

#define TAM 9

//bubbleSort serve para ordernar do menor para o maior

void imprimePassos(int v[], int tam, int passo){
	int i;
	
	cout << "Passo " << passo << ": ==> ";
	
	for (i = 0; i < tam; i += 1)
		cout << v[i] << " ";
	cout << endl;
}

void troca_v(int vet[], int i, int j){
	int aux;
	aux = vet[i];
	vet [i] = vet[j];
	vet[j] = aux;
}

void bubbleSort(int lista[], int tam){
	int ordenado,
		elem_final = 1,
		i, j, temp;
	while (ordenado == 0){
		ordenado = 1;
		imprimePassos(lista, tam, elem_final - 1);
		for (i = tam - 1; i >= elem_final; i -= 1){
			if (lista[i] < lista [i-1]){
				troca_v(lista, i, i-1);
				ordenado = 0;
			}
		}
		elem_final = elem_final + 1;
	}
}
int main(){
	int vetor[TAM], i;
	for (i=0; i < TAM; i += 1){
		cin >> vetor[i];
	}
	bubbleSort(vetor, TAM);
	//system("Pause");
}
