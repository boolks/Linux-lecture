// c언어코딩 :: byte의 크기 2

#include <stdio.h>
#include <stdint.h>

int main(){
    int i, base_number, index_number;
    int64_t res = 1;

    puts("-------------------------------");
    puts("*바이트의 크기*");
    puts("-------------------------------");

    printf("밑수를 입력하세요 : ");
    scanf("%d", &base_number);

    printf("지수를 입력하세요 : ");
    scanf("%d", &index_number);

    for(i = 0; i < index_number; i++){
        res = base_number * res;
    }

    puts("-------------------------------");
    printf("%d ^ %d = %I64d\n", base_number, index_number, res);
    puts("-------------------------------");

    puts("2^10 은 1K byte");
    puts("2^20 은 1M byte");
    puts("2^30 은 1G byte");
    puts("2^40 은 1T byte");
    puts("-------------------------------");
    puts("프로그램 실행해서 값을 따라 적어보세요.");

    return 0;
}
