#include <stdio.h>

int main(){
	int tabla, limite, numero = 0;
	int i, j;
	printf("Que tabla quieres: ");
	scanf("%d", &tabla);
	printf("Hasta que iteracion: ");
	scanf("%d", &limite);
	int n[tabla][limite];
	printf("        ");
	for (i = 1; i <= limite; i++)
	{
		printf("%d  ", i);
	}

	printf("\n    ");
	for (i = 0; i < limite; i++)
	{
		printf("___");
	}
	printf("\n");
	for (i = 1; i <= tabla; i++)
	{
		if (i < 10)
			{
				printf("\n  %d | ", i);	
			}else{
				printf("\n %d | ", i);
			}
		for (j = 1; j <= limite; j++)
		{
			if ((i * j) < 10)
			{
				printf("  %d", i * j);
			}else{
				printf(" %d", i * j);
			}
		}
	}
	printf("\n");
	return 0;
}
