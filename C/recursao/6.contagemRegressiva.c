#include <stdio.h>

void cr (int n){
    if(n == 0) {
        printf("%d ", n);
    } else{
        printf("%d ", n);
        cr(n - 1);
    }
}
int main(){
    int n;
    printf("Digite um numero natural: ");
    scanf("%d", &n);
    cr(n);
    return 0;
}