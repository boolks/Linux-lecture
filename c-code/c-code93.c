// 2-213 문자열의 길이 구하기

#include <stdio.h>
#include <string.h>

int main(){
    puts("--------------------------------");
    puts("*문자열의 길이 구하기*");
    puts("--------------------------------");

    printf("메모리 할당 : %d byte\n", sizeof("linux"));
    printf("문자열의 길이 : %d byte\n", strlen("linux"));
    puts("--------------------------------");

    puts("sizeof는 메모리할당 크기를 나타낸다.");
    puts("strlen함수는 NULL문자를 제외한 순수한 문자열의 길이를 나타낸다.");
    puts("--------------------------------");

    return 0;
}
