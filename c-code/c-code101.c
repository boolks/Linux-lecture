// 2-221 정수정렬 조건 2000 ~ 10000 사이만 정상

#include <stdio.h>

int main(){
    int salary[5];
    int i, j, tmp, n;
    n = sizeof(salary) / sizeof(int);

    puts("-------------------------------------");
    puts("*정수 정렬*");
    puts("-------------------------------------");

    // 1. 입력
    printf("*[%d]명의 연봉 입력*\n", n);
    puts("-------------------------------------");

    for(i = 0; i < n; i++){
        do{
            printf("[%d]번째 연봉 입력 : ", i);
            scanf("%d", &salary[i]);
        } while(salary[i] < 2000 || salary[i] > 10000);
    }

    puts("-------------------------------------");

    // 2. 원본 출력
    puts("**원본 출력**");

    for(i = 0; i < n; i++){
        printf("salary[%d] = %d만원\n", i, salary[i]);
    }

    puts("-------------------------------------");

    // 3. Selection Sort
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(salary[i] > salary[j]){
                tmp = salary[i];
                salary[i] = salary[j];
                salary[j] = tmp;
            }
        }
    }

    // 4. 정렬 후 출력
    puts("**정렬 후  출력**");

    for(i = 0; i < n; i++){
        printf("salary[%d] = %d만원\n", i, salary[i]);
    }

    puts("-------------------------------------");
    puts("2. 원본 출력 에러나면 넘어가지 마세요.");
    puts("-------------------------------------");

    return 0;
}
