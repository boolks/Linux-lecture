// c언어코딩 :: 정수 맞교환

#include <stdio.h>

int main(void){
    int a = 33, b = 77;
    int tmp;

    puts("-------------------------------");
    ("*정수 맞교환*");
    puts("-------------------------------");

    printf("원래값 : a=%d, b=%d\n", a, b);
    puts("-------------------------------");

    tmp = a;
    a = b;
    b = tmp;

    printf("\n교환 후 : a=%d, b=%d\n", a, b);
    puts("-------------------------------");

    puts("값을 맞교환 시 반드시 빈 그릇 필요");
    puts("-------------------------------");

    return 0;
}