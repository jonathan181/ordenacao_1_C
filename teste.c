#include<stdio.h>

void ordena(float * v, int n){
	int i, fim;
	float aux;
	
	for(fim=n-1;fim>0;fim--){
		for(i=0;i<fim;i++){
			if((int)v[i]>(int)v[i+1]){
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;		
			}
		}
	}
	
}

int main(){
	
	int n,i,tt;
	
	scanf("%d",&n);
	
	//float v[n];
	
	
	for(i=0;i<n;i++){
		//scanf("%f", &v[i]);
	}
	
	//ordena(v,n);
	
	if(n<0){
		n = n * (-1);
	}

	
	printf("%d \n", n);
	
	return 0;
}
