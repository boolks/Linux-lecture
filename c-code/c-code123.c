// 3-320 - goto문

#include <stdio.h>

int main(){
    char i = 65;

    puts("--------------------------------");
    puts("*goto문*");
    puts("--------------------------------");
To:
    putchar(i++);
    if(i < 91){
        goto To;
    }

    puts("\n--------------------------------");
    puts("To : 이정표다.");
    puts("goto To : To 이정표로 가라.");
    puts("goto문은 무조건 분기문이다.");
    puts("--------------------------------");

    return 0;
}
