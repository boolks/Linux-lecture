// 4-413 - fscanf함수

#include <stdio.h>

int main(){
    int age;

    fputs("*fscanf함수 - 정수*\n", stdout);
    fprintf(stdout, "몇 살이세요 : ");
    fscanf(stdin, "%d", &age);
    fprintf(stdout, "%d살. 동갑이네요\n", age);

    fputs("\n-----------------------------\n", stdout);
    fputs("scanf함수는 여러형식 입력함수\n", stdout);
    fputs("정수, 실수, 문자, 문자열 모두 입력가능\n", stdout);    fputs("\n-----------------------------\n", stdout);

    return 0;
}
