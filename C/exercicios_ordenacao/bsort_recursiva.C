#include <stdio.h>

void troca(int v[], int i, int j) {
	int x = v[i];
	v[i] = v[j];
	v[j] = x;
}

void bsortrecursiva (int v[], int n) {
	if(n == 1){
		return;
	}
	for (int i=0; i<n - 1; i++) {
		if (v[i]>v[i+1]) {
			troca(v,i,i+1);
		}
	}
	bsortrecursiva(v, n-1);
}

void exibe(int v[], int size) {
	int i;
	for(int i = 0; i<size; i++){
		printf("%d ", v[i]);
	}
}

int main(void) {
	int v[9] = { 51, 82, 38, 99, 75, 19, 69, 46, 27 };
	bsortrecursiva(v,9);
	exibe(v,9);
	return 0; // ( 19, 27 .....
}