// c언어코딩 :: 여러형식 입출력
#include <stdio.h>

int main(void){
    char name[20];
    int year;
    char btype;
    float vision;

    puts("------------------------------------------");
    puts(" **여러 형식 입출력** ");
    puts("------------------------------------------");

    printf(" 이름 : ");
    gets(name);

    printf(" 출생 년도: ");
    scanf("%d", &year);

    printf(" 혈액형 : ");
    getchar();
    fflush(stdin);
    btype = getchar();

    printf(" 평균시력 : ");
    scanf("%f", &vision);

    printf(" %s님 %d년생, %c형, 시력은 %.1f \n", name, year, btype, vision);

    puts("------------------------------------------");
    puts(" %s,%d 등 서식문자에 주의하세요 ");
    puts("------------------------------------------");

    return 0;
}
