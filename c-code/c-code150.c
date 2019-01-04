#include <stdio.h>

void sub(int n){
    printf("n = %d, &n = %d\n", n, &n);
}

int main(){
    int a = 20, b = 30, c = 40;
    puts("스택의 이해");

    sub(a);
    sub(b);
    sub(c);

    puts("주소를 잘 보세요.");

    return 0;
}
