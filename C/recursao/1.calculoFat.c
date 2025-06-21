#include <stdio.h>

int fat(int n){
    if(n == 0) return 1;
    else return n * fat(n-1);
}

int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Fatorial de %d: %d\n", n, fat(n));
    return 0;
}