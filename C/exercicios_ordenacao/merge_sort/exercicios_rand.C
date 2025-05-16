#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void intercala(int v[], int p, int m, int u){
	int *w =(int *) malloc((u-p+1)*sizeof(int));
	int i=p , j=m+1, k=0;
	while(i<=m && j<=u) {
		w[k++] = (v[i]<v[j]) ? v[i++] : v[j++];
	}
	while(i<=m) {
		w[k++] = v[i++];
	}
	while (j<=u){
		w[k++] = v[j++];
	}
	for (k=0; k<= u-p; k++){
		v[p+k] = w[k];
	}
	free(w);
}

void ms(int v[], int p, int u) {
	if( p==u ) return; 
	int m = (p+u)/2; 
	ms(v,p,m); 
	ms(v,m+1,u); 
	intercala(v,p,m,u); 
}

void msort(int v[], int n) {
	ms(v,0,n-1); 
}

void exibe(int arrays[], int size){
	for(int i = 0; i<size; i++){
		printf("%d ", arrays[i]);
	}
}

void preenche(int v[], int n, int s){
	srand(s);
	for (int i=0; i<n; i++){
		v[i] = rand()%1000;
	}
}

int main(void) {
	int v[10];
	preenche(v,10,time(NULL));
	msort(v,10);
	exibe(v,10);
	return 0;
}



