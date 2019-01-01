// c언어코딩 :: 큰 정수의 처리

#include <stdio.h>
#include <stdint.h>

int main(){
    unsigned int a = 4300000000;
    int64_t b = 100000000000000;

    puts("-------------------------------");
    puts("*큰 정수의 처리*");
    puts("-------------------------------");

    printf("a = %d\n", a);
    printf("b = %llu\n", b); // %llu : unsigned long long 변수를 출력할 때 사용
    puts("-------------------------------");
    puts("intsms -21억 ~ 21억");
    puts("unsigned int는 42.9억");
    puts("__int64는 2^64까지 저장 가능");
    puts("%I64d는 2^64까지 표현 가능");
    puts("-------------------------------");

    return 0;
}
