#include <stdio.h>

int main(){
    
    int a , b;
    printf("1つ目の数を入力してください：");
    scanf("%d", &a);   
    printf("2つ目の数を入力してください：");
    scanf("%d", &b);

    printf("a = %d\nb = %d\n",a, b);

    printf("%d + %d =%d\n",a, b, a + b);
    printf("%d - %d =%d\n",a, b, a - b);
    printf("%d * %d =%d\n",a, b, a * b);
    printf("%d / %d =%f\n",a, b, (float) a / b);
    printf("%d %% %d =%d\n",a, b, a % b);
    
    return 0;
}
