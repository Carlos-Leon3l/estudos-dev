// exercicios de listas encadeadas, varias funções que podem ser testadas
#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no {
	Item item;
	struct no *prox;
} *Lista;

Lista no(Item x, Lista p) {
	Lista n =(Lista) malloc(sizeof(struct no));
	n -> item = x;
	n -> prox = p;
	return n;
}

void anexa(Lista *A, Lista B) {
	if(!B ) {
		return;
	}
	while( *A ) {
		A = &( *A ) -> prox;
	}
	*A = B;
}

void destroi(Lista *L) {
	while( *L ) {
		Lista n = *L;
		*L = n->prox;
		free(n);
	}
	printf("\n");
	printf("Lista destruida");
}

Item maximo(Lista L) {
	if(L == NULL) {
		printf("\n");
		printf("Erro fatal");
		exit(1);
	}
	int max = L->item;
	while( L != NULL) {
		if(L->item > max) {
			max = L->item;
		}
		L = L->prox;
	}
	return max;

}

void pertence(int x, Lista L) {
	while ( L != NULL ) {
		if(x == L->item ) {
			printf("%d pertence a lista", x);
			return;
		}
		L = L->prox; 
	} 
	printf( "não pertence a lista");
}

Lista inversa(Lista L) {
	Lista anterior = NULL;
	Lista atual = L;
	Lista proximo;
	while (atual != NULL) {
		proximo = atual->prox; 
		atual->prox = anterior; 
		anterior = atual;
		atual = proximo;  
	}
	return anterior;
}

void exibe(Lista L) {
	printf("[");
	while(L != NULL ){
		printf("%d", L -> item);
		L = L -> prox;
	 if(L!= NULL) {
			printf(",");
		}
	}
	printf("]");
}

Lista intervalo(int inicio, int fim){
	Lista L = NULL;
	if(inicio > fim) {
		printf("\n");
		printf("Erro fatal");
		exit(1);
	}
	for(int i = fim; i>=inicio; i--) {
		L = no(i,L);
	}
	return L;
}

Item len(Lista L) {
	if(L == NULL) {
		return -1;
	}
	if(L->item > len(L->prox)) {
		return L->item;
	}
	return len(L->prox);
}

Item soma(Lista L) {
	if(L == NULL) {
		return 0;
	}
	return L->item + soma(L->prox);
}

Lista clone(Lista L) {
	Lista nova = NULL;
	if(L == NULL) {
		return NULL;
	}
	return  no(L->item, clone(L->prox));
}

Lista rnd(int quant, int aleatorios) {
	if(quant == 0) {
		return NULL;
	}
	int aleatorio = rand() % aleatorios;
	return no(aleatorio, rnd(quant-1, aleatorios));
}

Item ultimo(Lista L) {
	if(L == NULL) {
		return -1;
	}
	if (L->prox == NULL) {
		return L->item;
	}
	return ultimo(L->prox);
}

Item in(int x, Lista L) {
	if(L == NULL) {
		return 0;	
	}
	if (x == L->item ) {
		return 1;
	}
	return in(x, L->prox);
}

Item nth(int n, Lista L) {
	if(L == NULL) {
		return 0;
	}
	if(n == 1 ) {
		return L->item;
	}
	if(n > 1) {
		return nth(n-1, L->prox);
	}
	return -1;
}

Item menordalista(Lista L){
	if(L->prox == NULL) {
		return L->item;
	}
	int menordoresto = menordalista(L->prox);
	if(L->item < menordoresto){
		return L->item;
	}
	return menordoresto;
}

int sorted(Lista L) {
    if (L == NULL || L->prox == NULL) {
        return 1;
    }

    if (L->item > L->prox->item) {
        return 0;
    }

    return sorted(L->prox);
}

int equal(Lista A, Lista B) {
	if(A == NULL  && B == NULL ) {
		return 1;
	}
	if(A->item != B->item) {
		return 0;
	}
	if(A->item == B->item) {
		return equal(A->prox, B->prox);
	} 
	return 1;
}

int count(int x, Lista L) {
	if(L == NULL) {
		return 0;
	}
	if(L->item == x) {
		return 1 + count(x, L->prox);
	}
	return count(x, L->prox);
}

void replace(int x, int y, Lista L) {
	if(L == NULL) {
		return;
	}
	if (x == L->item) {
		L->item = y;
	}
	replace(x,y,L->prox);
}

int main(void) {
	Lista A = no(3,no(1,no(5,NULL)));
	printf("A = ");
	exibe(A);
	
	printf("\n");
	
	replace(5, 10, A);
	printf("novo A = ");
	exibe(A);


	return 0;
}
