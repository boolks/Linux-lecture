#include <stdio.h>

void sub1(){
    puts("sub1함수 => 인수도 없고, 리턴값도 없다.\n");
}

void sub2(int x){
    printf("sub2함수 x = %d\n", x);
    puts("정수 한 개 인수로 전달, 리턴값 없다.\n");
}

void sub3(int x, int y){
    int sum = x + y;
    printf("sub3함수 %d + %d = %d\n", x, y, sum);
    puts("정수 두 개 인수로 전달, 두 값을 더했다.\n");
}

int main(){
    sub1();
    sub2(100);
    sub3(200, 300);

    puts("전달 인수는 없을 수도 있고요.");
    puts("한 개 일수도 있고요.");
    puts("여러개일 수도 있고요.");
    puts("void는 전달 인수가 없다는 의미입니다.");

    return 0;
}
