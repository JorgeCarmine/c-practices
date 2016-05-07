#include <stdio.h>

 int nFactorial(int n){
	for (int i = n; i > 1; i--){
		n = n * (i - 1);
	}
	return n;
}

 int permutaciones(int objetos, int casillas){
	 int nMelate = nFactorial(objetos) / nFactorial(objetos - casillas);
		return nMelate;
}

void main(){
	int casillas, objetos;
	printf("Ingresa el numero de elementos: \n");
	scanf("%i", &objetos);
	printf("Ingresa el numero de casillas: \n");
	scanf("%i", &casillas);

	if (casillas > 0 && objetos > 0 && casillas < objetos){
		printf("Se pueden obtener %i combinaciones\n", permutaciones(objetos, casillas));
	}else{
		printf("ERROR  El numero de casillas es mayor al numero de elementos\n");
		main();
	}
}