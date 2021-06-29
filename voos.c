#include <stdio.h>
int main(void){
    int voos[5][2];
    int passageiros_cadastrados[5];
    int voo_desejado, identidade, validacao = 1;
    for(int linha  = 0; linha < 5; linha++){
        for(int coluna = 0; coluna < 2; coluna++){
            if(coluna == 0){
                printf("Digite o numero do voo [%d][%d]: ", linha, coluna);
                scanf("%d",&voos[linha][coluna]);}
            if(coluna == 1){
                printf("Quantos assentos disponiveis ? ");
                scanf("%d",&voos[linha][coluna]);}
        }
    }
    printf("Digite a identidade do cliente: ");
    scanf("%d", &identidade);
    printf("Digite  o seu voo desejado: ");
    scanf("%d", &voo_desejado);
    for(int linha  = 0; linha < 5; linha++){
        for(int coluna = 0; coluna < 2; coluna++){
            if(voo_desejado == voos[linha][coluna]){
                if(voos[linha][coluna + 1] > 1 && validacao == 1){
                    printf("Selecionando voo...");
                    printf("\n ID: %d | Cadastrado no voo numero: [%d] ", identidade,voo_desejado);
                        passageiros_cadastrados[linha] = identidade + '-' + voo_desejado;
                    // Tirando numero de lugares disponiveis
                        voos[linha][coluna + 1] -= 1;
                    printf("\n Atualizando numero de lugares... [%d]Disponiveis", voos[linha][coluna + 1]);
                        validacao -= 1;
                    }
                if(voos[linha][coluna + 1] == 0){
                    printf("\n Voo indisponivel");}
            }
        }
    }
    return 0;
}