#include <stdio.h>

int main(){

int r = 0.00 ;
double pi = 3.141592;

printf("半径を入力してください\n");
scanf("%d" , &r );

printf("半径は %d \n円周の長さは %.2lf \n円の面積は %.2lf\n ", r , 2*r*pi , r*r*pi );

return 0 ;

}   
