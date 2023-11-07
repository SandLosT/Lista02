#include <stdio.h>

int main() {
    int tamanho = 10;
    int valores_originais[10];
    int novo_conjunto[10];
    
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &valores_originais[i]);
    }
    
    while (tamanho > 1) {
        for (int i = 0; i < tamanho; i++) {
            printf("%d", valores_originais[i]);

            if (i < tamanho - 1) {
                printf(" ");
            }
        }
        printf("\n");
        
        for (int i = 0; i < tamanho - 1; i++) {
            novo_conjunto[i] = valores_originais[i] + valores_originais[i+1];
        }
        
        tamanho--;
        
        for (int i = 0; i < tamanho; i++) {
            valores_originais[i] = novo_conjunto[i];
        }
    }
    
    printf("%d\n", valores_originais[0]);

    return 0;
}
