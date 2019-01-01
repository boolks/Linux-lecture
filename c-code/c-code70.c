// 2-10 문자열 정렬
#include <stdio.h>
#include <string.h>

int main(){
    char city[5][10] = {"부산", "대구", "창원", "목포", "여수"};
    char tmp[10];
    int i, j, n;
    n = sizeof(city) / sizeof(char[10]);

    puts("------------------------------");
    puts("*문자열 정렬*");
    puts("------------------------------");

    // 1. 입력
    printf("살고 싶은 도시 [%d] 곳 입력\n", n);

    for(i = 0; i < n; i++){
        printf("[%d]번째 도시 : ", i);
        fflush(stdin);
        gets(city[i]);
    }

    puts("------------------------------");

    // 2. 원본 출력
    puts("\n**원본 출력**");

    for(i = 0; i < n; i++){
        printf("city[%d] ==> %s\n", i, city[i]);
    }
    puts("------------------------------");

    // 3. Selection Sort
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(strcmp(city[i], city[j]) > 0){
                strcpy(tmp, city[i]);
                strcpy(city[i], city[j]);
                strcpy(city[j], tmp);
            }
        }
    }
    puts("------------------------------");
    // 4. 정렬 후 출력
    puts("\n**정렬 후 출력**");

    for(i = 0; i < n; i++){
        printf("city[%d] ==> %s\n", i, city[i]);
    }
    puts("------------------------------");
    puts("원본출력이 안되면 점검하고 넘어가지 마세요");

    return 0;
}
