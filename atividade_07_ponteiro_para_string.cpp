#include<stdio.h>

int main() {
	char str[] = "Ola, mundo!"; // Declaração da String
	char *ponteiro = str; // Declaração do ponteiro

	// Loop responsável por imprimir os caracteres
	while(*ponteiro != '\0') {
		printf("%c ", *ponteiro);
		ponteiro++;
	}
	printf("\n");
	
	return 0;
}