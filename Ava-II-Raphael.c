#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;

    // Leitura da matriz
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Multiplicação por cinco e impressão da matriz resultante
    printf("\nA matriz resultante, multiplicada por cinco, eh:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] *= 5;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

