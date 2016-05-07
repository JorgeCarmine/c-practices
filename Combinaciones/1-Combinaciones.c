#include <stdio.h>
int nFactorial(int n);

int main(){
	int casillas, objetos, nMelate;
	printf("Ingresa el numero de elementos: \n");
	scanf("%i", &objetos);
	printf("Ingresa el numero de casillas: \n");
	scanf("%i", &casillas);

	if (casillas > 0 && objetos > 0 && casillas < objetos){
		nMelate = nFactorial(objetos) /  (nFactorial(casillas) * nFactorial(objetos - casillas));
		printf("Se pueden obtener %i combinaciones\n", nMelate);
	}else{
		printf("ERROR  El numero de casillas es mayor al numero de elementos\n");
		main();
	}
	return 0;
}

int nFactorial(int n){
	for (int i = n; i > 1; i--){
		n = n * (i - 1);
	}
	return n;
}