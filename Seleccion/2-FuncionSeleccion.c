#include <stdio.h>
int menor(int lista[], int tam, int i){
	int min, posMin

	min = lista[i];
	posMin = i;

	for (i; i < tam -1; i++)
	{
		if (min < lista[i])
		{
			min = lista[i];
			posMin = i;
		}
	}
	return posMin;
}

void seleccion(int vector[]){
	int i, j, tam = 10, min, aux;
	for (i = 0; i < tam - 1; i++)
	{
		min = menor(vector, tam, i);
		aux = vector[i];
		vector[i] = vector[min];
		vector[min] = aux;
	}

	for (i = 0; i < tam; ++i)
	{
		printf("%d\n", vector[i]);
	}
}

int main(){
	int vector[] = {7, 4, 1, 8, 5, 2, 9, 6, 3, 0};

	seleccion(vector);
}