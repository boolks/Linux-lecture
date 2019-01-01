// 2-12 구조체 배열의 입출력
#include <stdio.h>
#include <string.h>

struct Lunch{
    char menu[20];
    int price;
};
typedef struct Lunch Lunch;

int main(){
    Lunch lun[5];
    int i, n;
    n = sizeof(lun) / sizeof(Lunch);

    puts("------------------------------");
    puts("*구조체 배열의 입출력*");
    puts("------------------------------");

    printf("[%d]개의 즐겨먹는 점심 메뉴 입력\n", n);
    puts("------------------------------");

    for(i = 0; i < n; i++){
        do{
            printf("[%d]번째 메뉴 : ", i+1);
            //fflush(stdin);
            gets(lun[i].menu);
            printf("얼마예요 : ");
            scanf("%d", &lun[i].price);
        }while(getchar() != '\n');
    }

    puts("***메뉴판***");
    puts("------------------------------");

    for(i = 0; i < n; i++){
        printf("[%d]번 %s ==> %d원\n", i+1, lun[i].menu, lun[i].price);
    }

    puts("------------------------------");
    puts("fflush(stdin)은 키보드 버퍼 비우기");
    puts("------------------------------");

    return 0;
}
