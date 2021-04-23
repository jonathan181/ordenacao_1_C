#include<stdio.h>

void ordena(int * v, int n){
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

int main(){
	
	int n,i;
	
	scanf("%d",&n);
	
	int v[n];
	
	
	for(i=0;i<n;i++){
		scanf("%d", &v[i]);
	}
	
	ordena(v,n);
	
	for(i=0;i<n;i++){
		if(v[i] != v[i+1]){
			printf("%d ", v[i]);
		}
	}
	
	printf("\n");
	
	return 0;
}
