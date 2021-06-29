#include <stdio.h>


int main(void){
    int matriz1[2][5], matriz2[2][5], matriz_soma[2][5];
    for(int linha = 0; linha < 2; linha++){
        for(int coluna =0; coluna < 5;coluna++){
            printf("Digite o valor da primeira matriz [%d,%d]: ", linha,coluna);
            scanf("%d", &matriz1[linha][coluna]);
        }
    }
    for(int linha = 0; linha < 2; linha++){
        for(int coluna =0; coluna < 5;coluna++){
            printf("Digite o valor da segunda matriz [%d,%d]: ", linha,coluna);
            scanf("%d", &matriz2[linha][coluna]);
        }
    }
    for(int linha = 0; linha < 2; linha++){
        for(int coluna =0; coluna < 5;coluna++){
            matriz_soma[linha][coluna] = matriz1[linha][coluna] + matriz2[linha][coluna];
            printf("\n[%d,%d] %d", linha, coluna, matriz_soma[linha][coluna]);
        }
    }


    return 0;
}