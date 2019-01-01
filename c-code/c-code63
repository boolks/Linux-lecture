// 2-03 정수배열 입출력 고급

#include <stdio.h>

int main(){
    int score[5];
    int i, n;
    n = sizeof(score) / sizeof(int);

    puts("------------------------------");
    puts("*정수배열의 입출력*");
    puts("------------------------------");
    printf("*[%d]명의 점수 입력*\n", n);
    puts("------------------------------");

    for(i = 0; i < n; i++){
        do{
            printf("[%d]번째 score입력 : ", i);
            scanf("%d", &score[i]);
        }while(score[i] < 0 || score[i] > 100);
    }

    puts("**출 력**");

    for(i = 0; i < n; i++){
        printf("score[%d] = %d\n", i, score[i]);
    }

    puts("------------------------------");
    puts("0 ~ 100 사이만 정상값으로 본다.");
    puts("------------------------------");

    return 0;
}
