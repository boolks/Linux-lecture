// 4-412 - fgets함수

#include <stdio.h>

int main(){
    char it[20];
    fputs("*fgets함수*\n", stdout);
    fprintf(stdout, "근무하고 싶은 it 회사는 : ");
    gets(it);

    fprintf(stdout, "\n%s, 저도 그 회사 가고 싶어요.\n", it);
    fputs("\n---------------\n", stdout);
    fputs("gets함수 복습\n", stdout);
    fputs("\n---------------\n", stdout);

    return 0;
}
