// 3-309 이중 for문

#include <stdio.h>

int main(){
    int i, j;
    puts("-------------------------------");
    puts("*이중 for문*");
    puts("-------------------------------");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("i = %d, j = %d j의 반복\n", i, j);
        }
        printf("---- i의 반복 = %d ----\n", i);
    }

    puts("-------------------------------");
    puts("i와 j의 변화를 주의깊게 보세요.");
    puts("빨리 변하는 것은 안쪽 루프");
    puts("천천히 도는 것은 바깥쪽 루프");
    puts("-------------------------------");

    return 0;
}
