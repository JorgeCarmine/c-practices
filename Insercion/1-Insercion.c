#include <stdio.h>
int main()
{
int v[]={7, 4, 1, 8, 5, 2, 9};
int n=7,i,j,cont,cont2,aux;
  for (i=1;i<n;i++)
  {
  cont = 0;
    while(cont != i)
     {
      if(v[cont]>v[i])
        {
   cont2=cont;
        for(j=cont2;j<i;j++)
          {
            aux=v[j];
            v[j]=v[i];
            v[i]=aux;
            
           }
         }
 cont=cont+1;
      }
  }
    for(i=0;i<n;i++)
    {
      printf("v[%d]=%d\n",i,v[i]);
    } 
return 0;
}