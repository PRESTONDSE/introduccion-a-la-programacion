#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
float x, y, a, b, res;
  printf ("vamos a crear un programa que permita hacer un binomio al cuadrado multiplicado por la diferencia de dos numeros\n");

  
  
  printf ("(x+y)^2 * (a-b)\n");
   printf ("dame el valor de x\n");
   
   scanf ("%f", &x);
   
   printf("dame el valor de y\n");
   scanf ("%f", &y);
   
   printf("dame el valor de a\n");
   scanf("%f",&a);
   
   printf("dame el valor de b\n");
   scanf ("%f",&b);
   
   res= (x+y)*(x+y)*(a-b);
   printf("el resultado es: %5.2f",res);
   
  
  system("PAUSE");	
  return 0;
}
