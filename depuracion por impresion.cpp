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

 goto inicio;
 salida:
        
        //R=
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
