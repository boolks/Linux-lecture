// 2-06 정수 정렬 고급

#include <stdio.h>

int main(){
    int score[5];
    int i, j, tmp, n;
    n = sizeof(score) / sizeof(int);

    puts("------------------------------");
    puts("*정수 정렬*");
    puts("------------------------------");

    // 입력
    printf("*[%d]명의 점수 입력*\n", n);
    puts("------------------------------");

    for(i = 0; i < n; i++){
        do{
            printf("[%d]번째 score입력 : ", i);
            scanf("%d", &score[i]);
        }while(score[i] < 0 || score[i] > 100);
    }

    // 원본출력
    puts("**출력**");

    for(i = 0; i < n; i++){
        printf("score[%d] = %d\n", i, score[i]);
    }

    // Selection sort
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(score[i] > score[j]){
                tmp = score[i];
                score[i] = score[j];
                score[j] = tmp;
            }
        }
    }

    // 정렬 후 출력
    puts("\n**정렬 후 출력**");

    for(i = 0; i < n; i++){
        printf("score[%d] = %d \n", i, score[i]);
    }
    puts("------------------------------");
    puts("원본출력에서 에러나면 넘어가지 말고 해결하세요");
    puts("------------------------------");

    return 0;
}
