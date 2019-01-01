// c언어코딩 :: 구조체 초기화

#include <stdio.h>

struct Book{
    char title[20];
    char author[20];
    int series;
};
typedef struct Book Book;

int main(void){
    Book b1 = {"태백산맥", "조정래", 10}, b2 = {"토지", "박경리", 20};

    puts("-------------------------------");
    puts("*구조체 출력*");
    puts("-------------------------------");

    printf("b1 : %10s %10s %4d권\n", b1.title, b1.author, b1.series);
    printf("b2 : %10s %10s %4d권\n", b2.title, b2.author, b2.series);
    puts("-------------------------------");

    puts("b1.title에서 .d는 멤버접근 연산자");
    puts("-------------------------------");

    return 0;
}
