#include<stdio.h>

int main() {
	char str[] = "Ola, mundo!";
	char *ponteiro = str;

	while(*ponteiro != '\0') {
		printf("%c ", *ponteiro);
		ponteiro++;
	}
	printf("\n");
	
	return 0;
}