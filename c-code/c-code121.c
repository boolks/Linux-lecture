// 3-318 - continue문

#include <stdio.h>

int main(){
    int i;

    puts("--------------------------------");
    puts("*continue문*");
    puts("--------------------------------");

    for(i = 0; i < 10; i++){
        if(i == 5){
            continue;
        }
        printf(" C언어는 재밌다. : %d\n", i);
    }

    puts("--------------------------------");
    puts("조건이 참이 되면 건너뛴다. skip");
    puts("break문과 비교하여 이해하자.");
    puts("--------------------------------");

    return 0;
}
