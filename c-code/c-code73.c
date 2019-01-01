// 2-13 구조체 정렬

#include <stdio.h>
#include <string.h>

struct Lunch{
    char menu[20];
    int price;
};
typedef struct Lunch Lunch;

int main(){
    Lunch lun[5] = { {"햄버거", 4000}, {"설렁탕", 7000}, {"비빔밥", 6000},
    {"돈까스", 8000}, {"만두국", 5000} };
    int i, j, n;
    Lunch tmp;
    n = sizeof(lun) / sizeof(Lunch);

    puts("------------------------------");
    puts("*구조체 정렬*");
    puts("------------------------------");

    // 1. 원본 출력 - 점검하고 안되면 넘어가지 마세요.
    puts("----원본출력----");
    puts("***메뉴판***");
    puts("------------------------------");

    for(i = 0; i < n; i++){
        printf("[%d]번 %s ==> %d원 \n", i+1, lun[i].menu, lun[i].price);
    }

    puts("------------------------------");

    // 2. 메뉴순 정렬
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(strcmp(lun[j].menu, lun[j+1].menu) > 0){
                tmp = lun[j];
                lun[j] = lun[j+1];
                lun[j+1] = tmp;
            }
        }
    }

    // 3. 메뉴순 출력
    puts("----메뉴순 출력----");
    puts("***메뉴판***");
    puts("------------------------------");

    for(i = 0; i < n; i++){
        printf("[%d]번 %s ==> %d원 \n", i+1, lun[i].menu, lun[i].price);
    }
    
    puts("------------------------------");
    
    // 4. 가순 정렬
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1-i; j++){
            if(lun[j].price > lun[j+1].price){
                tmp = lun[j];
                lun[j] = lun[j+1];
                lun[j+1] = tmp;
            }
        }
    }

    // 5. 가격순 출력
    puts("----가격순 출력----");
    puts("***메뉴판***");
    puts("------------------------------");

    for(i = 0; i < n; i++){
        printf("[%d]번 %s ==> %d원 \n", i+1, lun[i].menu, lun[i].price);
    }

    puts("------------------------------");
    puts("절대 코드를 외우려고 하지 마세요");
    puts("------------------------------");

    return 0;
}

