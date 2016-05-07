#include <stdio.h>
int main(){
	int factorial = 1, n, i = 1;
	printf("Ingrese un numero: ");
	scanf("%d", &n);
	while(i <= n){
		factorial = factorial * i;
		i++;
	}
	printf("En factorial de %d es: %d\n",n, factorial );
}