#include <stdio.h>

int main() {
    int valor = 10;      // Declaração da variável inteira
    int *ponteiro;       // Declaração do ponteiro para inteiro
    
    ponteiro = &valor;   // O ponteiro aponta para o endereço da variável valor
    
    // Exibe o valor da variável usando o nome da variável
    printf("Valor usando a variável: %d\n", valor);
    
    // Exibe o valor da variável usando o ponteiro
    printf("Valor usando o ponteiro: %d\n", *ponteiro);
    
    return 0;
}
