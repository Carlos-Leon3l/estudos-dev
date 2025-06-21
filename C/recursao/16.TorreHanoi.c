#include <stdio.h>

int movimentos = 0;

void hanoi(int n, char origem, char auxiliar, char destino) {
    if (n == 1) {
        movimentos++;
        return;
    }
    hanoi(n - 1, origem, destino, auxiliar);
    movimentos++;
    hanoi(n - 1, auxiliar, origem, destino);
}

int main() {
    int n;
    printf("Quantos discos? ");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("O total de movimentos necessarios: %d\n", movimentos);
    return 0;
}