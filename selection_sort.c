#include<stdio.h>

void ordena(int * v, int n){
	int aux,i,k,count,qtde=0,j=0;
	int troca;
	int trocas[n];
	int trocas2[n];
	for(i=0;i<n;i++){
		trocas[i] =0;
	}
	for(i=0;i<n;i++){
		aux = v[i];
		troca = 0;
		for(k=i+1;k<n;k++){
			if(aux > v[k]){
				aux = v[k];
				count = k;
				troca = 1;
			}		
		}
		if(troca == 1){
			v[count] = v[i];
			v[i] = aux;
			trocas[j] = v[count];
			trocas2[j] = v[i];
			j++;
			qtde++;
		}
	}
	
	printf("%d\n",qtde);
	j=0;
	while(trocas[j] != 0){
		printf("%d <-> %d\n",trocas[j], trocas2[j]);
		j++;
	}
	
}

int main(){
	
	int n,i;
	
	scanf("%d",&n);
	
	int v[n];
	
	
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
	}
	
	ordena(v,n);
	
	for(i=0;i<n;i++){		
		printf("%d ", v[i]);
	}
	
	printf("\n");
	
	return 0;
}
