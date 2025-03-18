#include <stdio.h>

int main() {
    int numero;
    FILE *arquivo;

    // Abre o arquivo binário para leitura
    arquivo = fopen("dados.bin", "rb");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;  // Encerra o programa em caso de erro
    }

    // Lê o número inteiro do arquivo binário
    fread(&numero, sizeof(int), 1, arquivo);

    // Fecha o arquivo
    fclose(arquivo);

    // Exibe o número lido
    printf("Número lido do arquivo 'dados.bin': %d\n", numero);

    return 0;
}