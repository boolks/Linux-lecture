// 4-408 - fputc 함수

#include <stdio.h>

int main(){
    puts("* fputc 함수*");

    putchar('A');
    putchar('B');
    putchar('C');
    putchar('\n');
    fputc('A', stdout);
    fputc('B', stdout);
    fputc('C', stdout);

    putchar(97);
    putchar(98);
    putchar(99);
    putchar('\n');
    fputc(97, stdout);
    fputc(98, stdout);
    fputc(99, stdout);

    puts("--------------------------------------");
    puts("stdout은 표준출력을 의미합니다.");
    puts("standard output 모니터를 나타내요.");
    puts("어느 곳에 출력할지를 지정해줘야 하지요.");
    puts("정수와 문자가 같다는 것 복습했어요.");
    puts("--------------------------------------");

    return 0;
}
