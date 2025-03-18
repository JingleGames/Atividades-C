#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];  // Tamanho do buffer para armazenar a frase
    int contador = 0; // Variável para contar os caracteres

    // Solicita ao usuário para digitar uma frase
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Conta o número de caracteres, incluindo espaços
    // A função strlen() retorna o comprimento da string sem contar o caractere nulo '\0'
    contador = strlen(frase);

    // Caso a frase contenha um '\n' (que é adicionado pelo fgets), ele será contado como um caractere
    // Removemos esse '\n' se necessário
    if (frase[contador - 1] == '\n') {
        contador--;
    }

    printf("O numero de caracteres digitados (incluindo espacos) é: %d\n", contador);

    return 0;
}