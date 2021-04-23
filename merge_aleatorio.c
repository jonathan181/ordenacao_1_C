#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int contador;
void mergeSort(int * vetor, int inicio, int fim){
	int meio,i;
//	for(i=0;i<fim;i++){			
//		printf("%d\n", vetor[i]);
//	}
		
	if (inicio < fim) {
		meio = (inicio + fim) / 2;
		
		mergeSort(vetor, inicio, meio);
		mergeSort(vetor, meio+1, fim);
		//printf("inicio: %d meio: %d fim: %d\n",inicio,meio,fim);
		
		merge(vetor, inicio, meio, fim);
	}
}

void merge(int vetor[], int inicio, int meio, int fim) {
	int com1 = inicio, com2 = meio+1, comAux = 0, vetAux[fim-inicio+1];
	int count =0;
	
	while ((com1 <= meio) && (com2 <= fim)) {
		contador++;
		if (vetor[com1] <= vetor[com2]){
			vetAux[comAux] = vetor[com1];
			com1++;
		}else {
			vetAux[comAux] = vetor[com2];
			com2++;
		}
		count++;
		comAux++;
	}

	while (com1 <= meio){ // Caso ainda haja elementos na primeira metade
		vetAux[comAux] = vetor[com1];
		comAux++; 
		com1++;
	}
	while (com2 <= fim) { // Caso ainda haja elementos na segunda metade
		vetAux[comAux] = vetor[com2];
		comAux++; 
		com2++;
	}
	for (comAux = inicio; (comAux <= fim); comAux++) {
		vetor[comAux] = vetAux[comAux-inicio];
	}
	
}
	
	
int main(){
	int n,i,k,nv;
	int v[1001];
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		contador = 0;
		scanf("%d", &nv);
		
		srand(time(NULL));
		for(k=0;k<nv;k++){
		
			v[k] = rand()%100;
		}
		
		mergeSort(v,0,nv-1);
		
		printf("contador: %d\n", contador);
//		for(k=0;k<nv;k++){
//			printf("%d ", v[k]);
//		}
//		printf("\n");
	}
	
}
