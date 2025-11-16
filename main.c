#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    scanf("%d", &n);

    // Aloca a matriz dinamicamente, sem ser assim não funciona
    int **matriz = (int **)malloc(n * sizeof(int ));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int)malloc(n * sizeof(int));
    }

    int num;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &num);
                while(num > 127 || num < -127){
                    printf("Número Inválido, tente novamente: ");
                    scanf("%d", &num);
                }
            matriz[i][j] = num;
        }
    }

    int resposta = matriz[0][0];
    clock_t tempo0 = clock();

    for (int i1 = 0; i1 < n; i1++) {
        for (int j1 = 0; j1 < n; j1++) {

            for (int i2 = i1; i2 < n; i2++) {
                for (int j2 = j1; j2 < n; j2++) {
                    int soma = 0;
                    for (int i = i1; i <= i2; i++) {
                        for (int j = j1; j <= j2; j++) {
                            soma += matriz[i][j];
                        }
                    }
                    if (soma > resposta) {
                        resposta = soma;
                    }

                }
            }
        }
    }

    clock_t tempo1 = clock();

    double tempo_execucao = (double) (tempo1 - tempo0) / CLOCKS_PER_SEC;
    printf("Soma: %d\n", resposta);
    printf("Tempo: %.6f segundos", tempo_execucao);

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}