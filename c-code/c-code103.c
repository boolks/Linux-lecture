// 2-103 구조체 정렬

#include <stdio.h>
#include <string.h>

struct Tv{
    char bcast[20];
    int chan;
};
typedef struct Tv Tv;

int main(){
    Tv t[5] = { {"YTN", 25}, {"SBS", 5}, {"EBS", 13},
                {"MBC", 11}, {"KBS", 7} };
    int i, j, n;
    Tv tmp;
    n = sizeof(t) / sizeof(Tv);

    puts("-------------------------------------");
    puts("*구조체 정렬*");
    puts("-------------------------------------");

    // 1. 원본 출력 - 점검하고 안되면 넘어가지 마세요.
    puts("--원본출력--");
    puts("**T V**");
    puts("-------------------------------------");

    for(i = 0; i < n; i++){
        printf("[%d]번 %s ==> %2d번\n", i+1, t[i].bcast, t[i].chan);
    }

    puts("-------------------------------------");

    // 2. 방송국순 정렬
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(strcmp(t[j].bcast, t[j+1].bcast) > 0){
                tmp = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp;
            }
        }
    }

    // 3. 방송국순 출력
    puts("--방송국순 출력--");
    puts("**T V**");
    puts("-------------------------------------");

    for(i = 0; i < n; i++){
        printf("[%d]번 %s ==> %2d번\n", i+1, t[i].bcast, t[i].chan);
    }

    puts("-------------------------------------");

    // 4. 채널순 정렬
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(t[j].chan > t[j+1].chan){
                tmp = t[j];
                t[j] = t[j+1];
                t[j+1] = tmp;
            }
        }
    }

    // 5. 채널순 출력
    puts("--채널순 출력--");
    puts("**T V**");
    puts("-------------------------------------");

    for(i = 0; i < n; i++){
        printf("[%d]번 %s ==> %2d번\n", i+1, t[i].bcast, t[i].chan);
    }

    puts("-------------------------------------");
    puts("외우려고 하지 말고, 그냥 반복하세요.");
    puts("-------------------------------------");

    return 0;
}
