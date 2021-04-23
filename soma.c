#include<stdio.h>
#include<stdlib.h>

void ordena(int n, int * v){	
	int aux,i,k;
	
	for(i=0;i<n;i++){
		for(k=i+1;k<n;k++){
			if(v[i] > v[k]){
				aux = v[i];
				v[i] = v[k];
				v[k] = aux;
			}
		}
	}
	
}

int soma(int n, int * v,int inicio, int fim){
	int i,soma;
	
	soma = 0;
	
	for(i=inicio-1;i<=fim-1;i++){
		if(v[i] >= 0){
			soma += v[i];
		}else{
			soma += v[i] * (-1);
		}
	}
	
	return soma;
}

int main(){
	
	int n,ini,fim,i,tt;
	
	scanf("%d", &n);
	
	int * v;
	
	v = (int *)malloc(n * sizeof(int));
	
	for(i=0;i<n;i++){		
		scanf("%d", &v[i]);		
	}
	
	
	scanf("%d %d", &ini, &fim);
	
	ordena(n,v);
	
	tt = soma(n,v,ini,fim);
	
	for(i=0;i<n;i++){
		//printf("%d ", v[i]);
	}
	printf("%d\n", tt);
	

	
	return 0;
}
