#include <stdio.h>

int main(){
  int vector[] = {7, 4, 1, 8, 5, 2, 0, 9, 6, 3};
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

  for (i = 0; i < 10; ++i)
  {
    printf("%d\n", vector[i]);
  }
  return 0;
}