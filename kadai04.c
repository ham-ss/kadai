#include <stdio.h>

int main(){

int c = 0 ;
double pi = 3.141592;
double r = 0;

printf("�~���̒�������͂��Ă�������\n");
scanf("%d" , &c );

r = c / (2 * pi);

printf("�~���̒����� %d \n�~���̔��a�� %.2lf \n�~�̖ʐς� %.2lf\n ", c , r , r*r*pi );

return 0 ;

}