#include <stdio.h>

void imprimirParesImpares(int inicio, int fim) {
    printf("Pares: ");
    for (int i = inicio; i <= fim; i++) if (i % 2 == 0) printf("%d ", i);
    printf("\nÍmpares: ");
    for (int i = inicio; i <= fim; i++) if (i % 2 != 0) printf("%d ", i);
    printf("\n");
}

int main() {
    int inicio, fim;
    printf("Digite o início e o fim do intervalo: ");
    scanf("%d %d", &inicio, &fim);
    imprimirParesImpares(inicio, fim);
    return 0;
}
