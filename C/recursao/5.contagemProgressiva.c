#include <stdio.h>

void cp (int n, int i){
    if (n == 0){
        return;
    } else {
        printf("%d ", i);
        cp(n - 1, i + 1);
    }
}

int main(){
    int n;
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    cp(n, 1);
    return 0;
}