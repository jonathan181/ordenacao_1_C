#include<stdio.h>

void ordena(int * v, int n){
	int i,k,j=0,count=0;
	int aux;
	int c1,c2;
	
	int trocas[500];
	int trocas2[500];
	
	for(i=0;i<n;i++){
		//trocas[i] = 0;
		//trocas2[i] = 0;
	}

	
	j=0;
	for(i=n-1;i>0;i--){
		for(k=0;k<i;k++){
			if(v[k] > v[k+1]){				
				aux = v[k];
				v[k] = v[k+1];
				v[k+1] = aux;
				
				//printf("%d <-> %d\n",v[k+1], v[k]);
				
				trocas[j] = v[k+1];
				trocas2[j] = v[k];
				count ++;
				j++;
			}
		}
	}
	printf("%d\n", count);
	
	j=0;
//	while(trocas[j] != 0){
	for(i=0;i<count;i++){
		printf("%d <-> %d\n",trocas[i], trocas2[i]);
		//printf("%d\n", trocas[i]);
	}
	
}

int main(){
	
	int n,i,tt;
	
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
