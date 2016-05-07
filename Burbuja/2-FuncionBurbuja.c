#include <stdio.h>
int burbuja(int vector[]);

int main(){
  int vector[] = {7, 4, 1, 8, 5, 2, 9, 6, 3, 0};
  int i;
  printf("Vector desordenado: \n");
  for (i = 0; i < 10; ++i)
  {
    printf("%d\n", vector[i]);
  }

  burbuja(vector);

  printf("Vector ordenado: \n");
  for (i = 0; i < 10; ++i)
  {
    printf("%d\n", vector[i]);
  }
}

int burbuja(int vector[]){
  int i, j, aux;
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      if (vector[j] > vector[i])
      {
        aux = vector[i];
        vector[i] = vector[j];
        vector[j] = aux;
      }
    }
  }
  return 0;
}
