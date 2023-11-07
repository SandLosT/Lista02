#include <stdio.h>
#include <string.h>

typedef int teirin;

void lerMatriz(teirin matriz[4][4]) {
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            scanf("%d", &matriz[linha][coluna]);
        }
    }
}

void somarMatrizes(teirin mat01[4][4], teirin mat02[4][4], teirin resultado[4][4]) {
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            resultado[linha][coluna] = mat01[linha][coluna] + mat02[linha][coluna];
        }
    }
}

void subtrairMatrizes(teirin mat01[4][4], teirin mat02[4][4], teirin resultado[4][4]) {
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            resultado[linha][coluna] = mat01[linha][coluna] - mat02[linha][coluna];
        }
    }
}

void multiplicarMatrizes(teirin mat01[4][4], teirin mat02[4][4], teirin resultado[4][4]) {
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            resultado[linha][coluna] = 0;
            for (int k = 0; k < 4; k++) {
                resultado[linha][coluna] += mat01[linha][k] * mat02[k][coluna];
            }
        }
    }
}

int main() {
    teirin mat01[4][4];
    teirin mat02[4][4];
    char operacao[5];
    teirin resultado[4][4];
    
    lerMatriz(mat01);
    lerMatriz(mat02);
    scanf("%s", operacao);

    if (strcmp(operacao, "soma") == 0) {
        somarMatrizes(mat01, mat02, resultado);
    }
    else if (strcmp(operacao, "sub") == 0) {
        subtrairMatrizes(mat01, mat02, resultado);
    }
    else if (strcmp(operacao, "mult") == 0) {
        multiplicarMatrizes(mat01, mat02, resultado);
    }

    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            printf("%*d", +4, resultado[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
