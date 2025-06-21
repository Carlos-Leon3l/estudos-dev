#include <stdio.h>

int q(int n){
    for(int i = n; i > n; i -= 2){
        return n % 2;
    }
    if(n == 0){
        return 0;
    }
    return q(n - 1) + n + n - 1;
}

int main(){
    int num;
    printf("Numero? ");
    scanf("%d", &num);
    printf("O quadrado do numero %d e: %d", num, q(num));
    return 0;
}