#include <stdio.h>

int main() {
    int teste[4][4] = {
        {0, 0, 1, 0},
        {9, 2, -6, 2},
        {-3, 2, -4, 1},
        {-2, 6, 0, -3}
    };
    int N = 4;
    int resposta = -10000;
    int P[4][4]; 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            P[i][j] = teste[i][j];

            if (i > 0) {
                P[i][j] += P[i-1][j];
                }
            if (j > 0) {
                P[i][j] += P[i][j-1];
                }
            if (i > 0 && j > 0) {
                P[i][j] -= P[i-1][j-1];
                }
            printf("%d, ", P[i][j]);
            printf("\n");
        }
    }

    // começa a percorrer a apartir dessa posição
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            // 
            for (int i2 = i; i2 < N; i2++) {
                for (int j2 = j; j2 < N; j2++) {

                    //int soma = 0;

                    // Soma todos os elementos do retângulo, da pra aplicar algum tipo de programação dinâmica aqui
                    //for (int x = i; x <= i2; x++) {
                        //for (int y = j; y <= j2; y++) {
                            //soma += teste[x][y];
                        //}
                    //}
                    int soma = P[i2][j2];
                    
                    if (i > 0) soma -= P[i-1][j2];
                    if (j > 0) soma -= P[i2][j-1];
                    if (i > 0 && j > 0) soma += P[i-1][j-1];
                    

                    // Atualiza máximo
                    if (soma > resposta) {
                        resposta = soma;
                    }
                }
            }
        }
    }

    printf("%d\n", resposta);
    

    return 0;
}