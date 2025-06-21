#include <stdio.h>

int termial(int n) {
    int acumulador = 0;
    if (n == 0){
        return acumulador;
    } else {
        acumulador = n;
        return termial(n- 1) + acumulador;
    }
}

int main() {
    int numero;
    printf("Digite um numero natural (n >= 0): ");
    scanf("%d", &numero);
    printf("A soma dos %d primeiros numeros naturais e: %d\n", numero, termial(numero));
    return 0;
}