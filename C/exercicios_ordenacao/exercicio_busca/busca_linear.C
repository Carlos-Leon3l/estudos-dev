#include <stdio.h>

int lsearch(int x, int v[], int size) {
	for(int i = 0; i<size; i++){
		if(x == v[i]){
			return 1;
		} 
	}
	return 0;
}

// teste de uma busca linear
int main(void) {
	int v[8] = { 66, 80, 31, 48, 27, 75, 19, 52};
	printf("27: %d\n", lsearch(27,v,8));
	printf("51: %d\n", lsearch(51,v,8));
	return 0;
}