#include <stdio.h>

int main() {
    int numero;
    FILE *arquivo;

    // Solicita ao usuário para digitar um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Abre o arquivo binário para escrita (se não existir, será criado)
    arquivo = fopen("dados.bin", "wb");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;  // Encerra o programa em caso de erro
    }

    // Grava o número inteiro no arquivo binário
    fwrite(&numero, sizeof(int), 1, arquivo);

    // Fecha o arquivo
    fclose(arquivo);

    printf("Número gravado no arquivo 'dados.bin' com sucesso.\n");

    return 0;
}