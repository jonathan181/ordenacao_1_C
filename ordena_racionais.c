#include<stdio.h>

void ordena(float * v, int n){
	int i,k;
	float aux;
	int c1,c2;
	
	for(i=n-1;i>0;i--){
		for(k=0;k<i;k++){
			c1 = (v[k])/1;
			c2 = (v[k+1])/1;
			//printf("c1: %.2f -- c2: %.2f \n", c1,c2);
			if(c1 > c2){				
				aux = v[k];
				v[k] = v[k+1];
				v[k+1] = aux;
			}
		}
	}
	
}

int main(){
	
	int n,i,tt;
	
	scanf("%d",&n);
	
	float v[n];
	
	
	for(i=0;i<n;i++){
		scanf("%f", &v[i]);
	}
	
	ordena(v,n);
	tt = (v[0])/1;
	
	//printf("%d\n", (v[0])/1);
	
	for(i=0;i<n;i++){
		printf("%.2f\n", v[i]);
	}
	
	//printf("descrescente:\n");
	
//	for(i=n-1;i>=0;i--){
//		printf("%.2f\n", v[i]);
//	}
	
	//printf("\n");
	
	return 0;
}
