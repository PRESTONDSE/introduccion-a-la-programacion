#include <cstdlib>
#include <iostream>
#define max(a,b) (a>=b)? a:b   //si a es mayor o igual que b nos devolvera a
int absoluto (int x){         //si es menor que b devolvera b
 return (x>0)? x:-x;           //? para evaluar (a>=b)
    
}
   
using namespace std;

int main(int argc, char *argv[])
{
int A,B, R; 
A=-10; B=725; 
A=absoluto(A); 
B=absoluto(B);
 printf("%d\t%d\n",A,B);
 
 R=A;
 A=max(A,B); B=(A-R!=0) ?R:B;
  printf("%d\t%d\n",A,B);
 inicio:
        system("pause");       
        R=A%B;
        printf("R=%d\tB=%d\n",R,B);
        B=(R==0)?B:R;
        /*_asm("mov $0x0,%eax"); codigo de ensamblador en linea*/
         
         R=A%B;
        printf("R=%d\tB=%d\n",R,B);
        B=(R==0)?B:R;
         R=A%B;
        printf("R=%d\tB=%d\n",R,B);
        B=(R==0)?B:R;
         R=A%B;
        printf("R=%d\tB=%d\n",R,B);
        B=(R==0)?B:R;
         R=A%B;
        printf("R=%d\tB=%d\n",R,B);
        B=(R==0)?B:R;

 //goto inicio;  
// salida: //R and_eq B;
 
 A=-1;
  int i;
 printf("\n");
 for (i=31 ;i>=1; i--){
      B=A>>i;
      printf("%d",B&1);
}                 
 
 
        
        //R=
        
    system("PAUSE");
    return 0;
}
