#include <stdio.h>

int main(){

int c = 0 ;
double pi = 3.141592;
double r = 0;

printf("円周の長さを入力してください\n");
scanf("%d" , &c );

r = c / (2 * pi);

printf("円周の長さは %d \n円周の半径は %.2lf \n円の面積は %.2lf\n ", c , r , r*r*pi );

return 0 ;

}