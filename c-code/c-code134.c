// 3-331 - 나눗셈 연산자

#include <stdio.h>

int main(){
    puts("*나눗셈 연산자*");
    printf("10 / 3 = %d\n", 10/3);
    printf("10 % 3 = %d\n", 10%3);

    puts("---------------------------------");
    puts("C언어에서 나눗셈은 두 가지다.");
    puts("/ => 몫을 구한다. % => 나머지를 구한다.");
    puts("정수/정수 = 정수");
    puts("정수/실수 = 실수");
    puts("실수/정수 = 실수");
    puts("실수/실수 = 실수");
    puts("---------------------------------");

    return 0;
}
