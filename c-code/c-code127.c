// 3-324 - 간단 계산기

#include <stdio.h>

int main(){
    int num1, num2;
    char op;

    puts("---------------------------");
    puts("*간단 계산기*");
    puts("---------------------------");

    printf("첫번째 수 : ");
    scanf("%d", &num1);

    printf(" [ +, -, *, / ] : ");
    getchar();
    op = getchar();
    printf("두번 째 수 : ");
    scanf("%d", &num2);

    if(op == '+'){
        printf("%d + %d = %d\n", num1, num2, num1+num2);
    } else if(op == '-'){
        printf("%d - %d = %d\n", num1, num2, num1-num2);
    } else if(op == '*'){
        printf("%d * %d = %d\n", num1, num2, num1*num2);
    } else if(op == '/'){
        printf("%d / %d = %d\n", num1, num2, num1/num2);
    } else{
        printf("%c 그런 연산자는 없습니다.\n", op);
    }

    puts("---------------------------");
    puts("천천히 반복하여 실습해 보세요.");
    puts("여러가지 방식으로 변형하여 보세요.");
    puts("---------------------------");

    return 0;
}
