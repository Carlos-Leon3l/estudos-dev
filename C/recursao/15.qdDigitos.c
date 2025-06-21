#include <stdio.h>

int qd(int n){
    if(n == 0){
        return 0;
    }
    return 1 + qd(n / 2);
}

int main (){
    int num;
    printf("Entre com o numero inteiro: ");
    scanf("%d", &num);
    printf("A quantidade de digitos binarios contido em %d eh %d", num, qd(num));
    return 0;
}