// 2-02 정수배열 입출력

#include <stdio.h>

int main(){
    int score[5];
    int i, n;
    n = sizeof(score) / sizeof(int);

    puts("------------------------------");
    puts("*정수 배열의 입출력*");
    puts("------------------------------");

    printf("[%d]명의 점수 입력\n", n);

    for(i = 0; i < n; i++){
        printf("[%d]번째 score입력 : ", i);
        scanf("%d", &score[i]);
    }

    puts("**출력**");
    for(i = 0; i < n; i++){
        printf("score[%d] = %d \n", i, score[i]);
    }
    puts("------------------------------");
    puts("배열은 항상 0부터 카운트 된다.");
    puts("------------------------------");

    return 0;
}
