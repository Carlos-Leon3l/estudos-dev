#include <stdio.h>
#include <math.h>
float h (int n){
    if (n == 0){
        return 0;
    } else {
        return h(n - 1) + 1.0 / n;
    }
}
int main(){
    int n;
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    float resultado = h(n);
    resultado = round(resultado * 100) / 100;
    printf("Valor Harmonica de (%d) = %.2f\n", n, resultado);
    return 0;
}