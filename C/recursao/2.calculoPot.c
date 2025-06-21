#include <stdio.h>

float pot (float x, int n){
    if(n == 0){
        return 1;
    } else if(n < 0) {
        return 1 / pot(x, -n);
    } else {
        return x * pot(x, n-1);
    }
}

int main(){
    int n;
    float x;
    printf("Entre com a base ");
    scanf("%f", &x);
    printf("Entre com o expoente ");
    scanf("%d", &n);
    printf("Resultado potencial =  %.1f\n", pot(x, n));
    return 0;
}