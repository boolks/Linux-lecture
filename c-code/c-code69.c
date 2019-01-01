// 2-09 문자열 정렬

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

    // 1. 원본 출력
    puts("\n **원본 출력**");

    for(i = 0; i < n; i++){
        printf("city[%d] ==> %s \n", i, city[i]);
    }

    // 2. 정렬

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

    // 3. 정렬 후 출력
    puts("\n**정렬 후 출력**");

    for(i = 0; i < n; i++){
        printf("city[%d] ==> %s\n", i, city[i]);

    }
    puts("------------------------------");
    puts("strcmp는 문자열 비교함수, strcpy는 문자열 복사");
    puts("------------------------------");

    return 0;
}
