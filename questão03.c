#include <stdio.h>
#include <string.h>

int main() {
    typedef int teirin;
    teirin mat01[4][4];
    teirin mat02[4][4];
    char operacao[5];
    teirin resultado[4][4];
    
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            scanf("%d", &mat01[linha][coluna]);
        }
    }
    
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            scanf("%d", &mat02[linha][coluna]);
        }
    }scanf("%s", operacao);


    if (strcmp(operacao, "soma") == 0) {
        for (int linha = 0; linha < 4; linha++) {
            for (int coluna = 0; coluna < 4; coluna++) {
                resultado[linha][coluna] = mat01[linha][coluna] + mat02[linha][coluna];
            }
        }
    }
    else if (strcmp(operacao, "sub") == 0) {
        for (int linha = 0; linha < 4; linha++) {
            for (int coluna = 0; coluna < 4; coluna++) {
                resultado[linha][coluna] = mat01[linha][coluna] - mat02[linha][coluna];
            }
        }
    }
    else if (strcmp(operacao, "mult") == 0) {
        for (int linha = 0; linha < 4; linha++) {
            for (int coluna = 0; coluna < 4; coluna++) {
                resultado[linha][coluna] = 0;
                for (int k = 0; k < 4; k++) {
                    resultado[linha][coluna] += mat01[linha][k] * mat02[k][coluna];
                }
            }
        }
    }

    
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            printf("%*d", +4, resultado[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
