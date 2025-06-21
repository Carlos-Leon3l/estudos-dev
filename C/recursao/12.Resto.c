// Crie a função recursiva `resto(m, n)`, que devolve o resto da divisão inteira do número natural **m** pelo número natural `n != 0`, usando apenas subtração

#include <stdio.h>

int resto(int m, int n){
    if(m < n){
        return m;
    }
    return resto(m - n, n);
}

int main(){
    int num1, num2;
    printf("Entre com o Dividendo e o divisor para saber o resto da divisao\n");
    scanf("%d %d", &num1, &num2);
    if(num1 == 0 || num2 == 0){
        printf("Divisao por 0 não é possivel!");
    }
    resto(num1, num2);
    printf("o resto da divisao e: %d\n", resto(num1, num2));
    return 0;
}