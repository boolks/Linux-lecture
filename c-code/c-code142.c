// 4-410 - fprintf함수

#include <stdio.h>

int main(){
    puts("*fprintf 함수*");
    puts("**puts함수 출력**");
    printf("%d, %.1f %c %s\n", 20, 3.14, 'A', "korea");
    printf("인생은 한 판의 연극이다.\n");

    fprintf(stdout, "\n ***fprintf함수 출력***\n");
    fprintf(stdout, "%d, %.1f, %c %c\n", 20, 3.14, 'A', "korea");
    fprintf(stdout, "인생은 한 판의 연극이다.\n");

    puts("-----------------------------------");
    puts("대부분 printf함수와 같아요.");
    puts("모니터 지정을 하는 stdout이 앞에 나와요.");
    puts("fputs함수와 차이점이고, 만든사람 마음이죠.");
    puts("-----------------------------------");

    return 0;
}
