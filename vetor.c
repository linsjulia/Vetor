#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[10];
    int i;  

    printf("Digite os 10 numeros separados por espacos:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        numeros[i] *= 2;
    }


    printf("\nResultados:\n");

    for (i = 0; i < 10; i++) {
        printf("Posicao %d: %d\n", i, numeros[i]);
    }

    return 0;
}

