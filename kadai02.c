#include <stdio.h>
int main(void)
{
    int a , b;
    printf("1�ڂ̐�����͂��Ă��������F");
    scanf("%d", &a);   
    printf("2�ڂ̐�����͂��Ă��������F");
    scanf("%d", &b);

    printf("a = %d\nb = %d\n",a, b);

    printf("%d + %d =%d\n",a, b, a + b);
    printf("%d - %d =%d\n",a, b, a - b);
    printf("%d * %d =%d\n",a, b, a * b);
    printf("%d / %d =%f\n",a, b, (float) a / b);
    printf("%d %% %d =%d\n",a, b, a % b);
    
    return 0;
}
