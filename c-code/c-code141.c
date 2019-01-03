// 4-409 - fputs 함수

#include <stdio.h>

int main(){
    puts("*fputs 함수*");
    puts("삶은 속도가 아니라 방향이다.");
    puts("인생은 성적순이 아니다.");
    puts("빌게이츠, 스티브잡스, 주커버그 모두 대학 중퇴자이다.");

    fputs("\b***fputs함수 출력***\n", stdout);
    fputs("삶은 속도가 아니다 방향이다.\n", stdout);
    fputs("인생은 성적순이 아니다.\n", stdout);
    fputs("빌게이츠, 스티브잡스, 주커버그 모두 대학 중퇴자이다.\n", stdout);

    puts("------------------------------------");
    puts("stdout은 표준출력을 의미한다.");
    puts("fputs함수는 출력이름을 지정해야 합니다.");
    puts("fputs함수는 자동 줄바꿈 안됩니다.");
    puts("------------------------------------");

    return 0;
}
