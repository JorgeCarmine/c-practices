#include <stdio.h>

int factorial(int n){
	int factorial = 1, i = 1;
	while(i <= n){
		factorial = factorial * i;
		i++;
	}
	return factorial;
}

int main(){
	int numero;
	printf("Ingresa un numero: ");
	scanf("%d", &numero);
	printf("El factorial de %d es %d\n",numero, factorial(numero) );
}