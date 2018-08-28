#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float pies , pul , yar , cent , met ;
    printf ("este programa convierte a valor de pies a pulgadas, yardas, centimetros, metros\n");
    printf ("favor de darme el valor de pies\n");
    scanf ("%f",&pies);
    
    pul= pies*12;
      printf ("el valor de pulgadas es: %f\n", pul);
      yar= pies/3;
    printf ("el valor de yardas es: %f\n", yar);
    cent= pul*2.54;
       printf ("el valor de centimetros es: %f\n", cent);
    met= cent/100;
     printf ("el valor de metros es: %f\n", met);
  
   
    
  
  system("PAUSE");	
  return 0;
}
