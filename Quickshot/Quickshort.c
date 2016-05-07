#include <stdio.h>

int fquick(int v[], int div, int sub);

int main()
{
int n=10,i,div,sub;
int v[]={7,2,7,9,1,3,1,2,5,1};
 sub=n-1;
 div=0;

fquick(v,div,sub);
for(i=0;i<n;i++)
{
printf("v[%d]=%d\n",i,v[i]);
}
return 0;	

}
int fquick(int v[], int div, int sub)
{
int i,aux;
for( i=div+1;i<=sub;i++)
{
  if(v[div]>=v[i])
   {
     aux=v[div];
     v[div]=v[i];    
     v[i]=aux;
      printf(" paso uno %d  %d \n ",v[i],v[div]);
     if((div+1)<i)
     {
       aux=v[div+1];
       v[div+1]=v[i];
       v[i]=aux;
       printf("paso dos %d  %d \n ",v[i],v[div]);
     }
       div++;

 
   }
}
return 0;
}