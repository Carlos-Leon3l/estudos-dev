// Crie a função recursiva sd(n), que devolve a soma dos digitos do numero natural n. Por exemplo, a chamada sd(7859) deve devolver 29
#include <stdio.h>

int sd(int n){
    if(n == 0){
        return 0;
    }
    return (n % 10) + sd(n / 10);
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("A soma dos digitos de %d eh: %d\n", num, sd(num));
    return 0;
}