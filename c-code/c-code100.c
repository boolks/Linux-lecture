// 2-220 문자 2차원 배열

#include <stdio.h>

int main(){
    int i, n;
    char sports[5][10] = {"축구", "야구", "배구", "탁구", "농구"};
    n = sizeof(sports) / sizeof(char[10]);

    puts("--------------------------------");
    puts("*문자 2차원 배열*");
    puts("--------------------------------");

    printf("sports = %d, size = %d byte\n", sports, sizeof(sports) );
    puts("--------------------------------");

    for(i = 0; i < n; i++){
        printf("sports[%d] = %s, addr = %d\n", i, sports[i], sports[i]);
    }

    puts("--------------------------------");
    puts("배열명은 시작주소를 갖는 상수.");
    puts("동일한 것을 모아 놓은 게 배열.");
    puts("배열의 배열 ==> 2차원 배열.");
    puts("--------------------------------");

    return 0;
}
