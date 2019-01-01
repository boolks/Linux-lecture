// c언어코딩 :: 구조체 입출력

#include <stdio.h>
#include <string.h>

struct Book{
    char title[20];
    char author[20];
    int series;
};
typedef struct Book Book;

int main(void){
    Book tmp;
    Book b1 = {"태백산맥", "조정래", 10};

    puts("-------------------------------");
    puts("*구조체 입출력*");
    puts("-------------------------------");

    printf("읽고 싶은 대하소설은 : ");
    gets(b1.title);

    printf("그 소설의 저자는 : ");
    gets(b1.author);

    printf("시리즈는 몇 권인가요 : ");
    scanf("%d", &b1.series);

    printf("b1 : %10s %10s %4d권\n", b1.title, b1.author, b1.series);
    puts("-------------------------------");

    puts("구조체 입출력은 구조체 변수.멤버 변수명 형태");
    puts("-------------------------------");

    return 0;
}
