#include <stdio.h>

int burbuja(int v[], int bandera, int n){
	int aux, i;

	if (bandera == 0)
	{
		bandera = 1;
		for (i = 0; i < n - 1; i++)
		{
			if (v[i] > v[i+1])
			{
				aux = v[i];
				v[i] = v[i+1];
				v[i+1] = aux;
				bandera = 0;
			}
		}
		burbuja(v, bandera, n);
	}else{
		for (i = 0; i < n; ++i)
		{
			printf("%d\n", v[i]);
		}
	}
}

int main(){
	int v[] = {7, 4, 1, 8, 5, 2, 9, 6, 3, 0};
	burbuja(v, 0, 10);
}