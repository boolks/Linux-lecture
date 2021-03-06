// 3-301 제어문과 연산자 - for문 기초

#include <stdio.h>

int main(){
    int i, sum = 0;
    puts("---------------------------");
    puts("*for문 기초*");
    puts("---------------------------");

    for(i = 1; i <= 100; i = i+2){
        sum = sum + i;
        printf("i = %2d, sum = %2d\n", i, sum);
    }

    printf("\n");
    sum = 0;

    for(i = 2; i <= 100; i = i+2){
        sum = sum + i;
        printf("i = %2d, sum = %2d\n", i, sum);
    }

    puts("---------------------------");
    puts("변수 i가 1~10까지 10번 반복했습니다.");
    puts("11라인 sum = 0은 초기값을 0으로 설정했고요.");
    puts("---------------------------");

    return 0;
}
