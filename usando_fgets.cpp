#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50];

    // Solicita o nome
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Solicita o sobrenome
    printf("Digite seu sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);

    // Remover o caractere de nova linha '\n' que fgets pode capturar
    nome[strcspn(nome, "\n")] = '\0';  // Remove o '\n' no final do nome
    sobrenome[strcspn(sobrenome, "\n")] = '\0';  // Remove o '\n' no final do sobrenome

    // Exibe a mensagem
    printf("Olá, %s %s!\n", nome, sobrenome);

    return 0;
}