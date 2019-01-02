// 2-102 문자열 정렬

#include <stdio.h>
#include <string.h>

int main(){
    char town[5][10];
    char tmp[10];
    int i, j, n;
    n = sizeof(town) / sizeof(char[10]);

    puts("-------------------------------------");
    puts("*문자열 정렬*");
    puts("-------------------------------------");

    // 1. 입력
    printf("살고 싶은 동네 [%d]개 동 입력\n", n);
    puts("-------------------------------------");

    for(i = 0; i < n; i++){
        printf("[%d]번째 동 이름 : ", i);
        fflush(stdin);
        gets(town[i]);
    }

    puts("-------------------------------------");

    // 2. 원본 출력
    puts("\n**원본 출력**");

    for(i = 0; i < n; i++){
        printf("town[%d] ==> %s\n", i, town[i]);
    }
    puts("-------------------------------------");
    
    // 3. Bubble Sort
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(strcmp(town[j], town[j+1]) > 0){
                strcpy(tmp, town[j]);
                strcpy(town[j], town[j+1]);
                strcpy(town[j+1], tmp);
            }
        }
    }

    // 4. 정렬 후 출력
    puts("\n**정렬 후 출력**");

    for(i = 0; i < n; i++){
        printf("town[%d] ==> %s\n", i, town[i]);
    }
    puts("-------------------------------------");
    puts("원본 출력이 안되면 점검하고 넘어가지 마세요.");
    puts("-------------------------------------");

    return 0;
}
