#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int quickSort(int * A, int p, int r){
	int q;
	if(p < r){
		q = partition(A,p,r);
		
		quickSort(A,p,q-1);
		quickSort(A,q+1,r);
	}
	
} 


int partition(int * A, int p, int r){
	int pivo = A[r];
	int i=p-1;
	int j;
	for(j=p; j <= r-1; j++){
		if(A[j] <= pivo){
			i = i + 1;
			troca(A,A[i],A[j]);
		}
	}
	troca(A,A[i+1],A[r]);
	return (i+1);
	
}

void troca(int *v, int  a, int  b){
	int aux;
	
	aux =  v[a];
	v[a] = v[b];
	v[b] = aux;
	
}

int main(){
	int n,k,i;
	
	scanf("%d", &n);
	
	int v[n];
	
	srand(time(NULL));
	for(k=0;k<n;k++){	
		v[k] = rand()%100;
	}
	
	quickSort(v,1,n-1);
	
	for(i=0;i<n;i++){
		printf("%d ", v[i]);
		
	}
	printf("\n");

	
}
