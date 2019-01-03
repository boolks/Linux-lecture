// 3-304 제어문과 연산자 do-while문

#include <stdio.h>

int main(){
    int i = 1, sum = 0;
    puts("-------------------------------");
    puts("*do-while문*");
    puts("-------------------------------");

    do{
        sum = sum + i;
        printf("i = %2d, sum = %2d\n", i, sum);
        i = i + 1;
    }while(i <= 10);

    puts("-------------------------------");
    puts("일단 한 번은 실행하고 봅니다.");
    puts("do-while문은 조건을 나중에 체크합니다.");
    puts("-------------------------------");

    return 0;
}
