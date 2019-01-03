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

    switch(op){
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1+num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1-num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1*num2);
        break;
    case '/':
        printf("%d / %d = %d\n", num1, num2, num1/num2);
        break;
    default:
        printf("%c 그런 연산자는 없습니다.\a\a", op);
    }

    puts("---------------------------");
    puts("다중 if문과 비교하여 보고");
    puts("어떤 문장이 더 좋겠는지 고민해 보세요.");
    puts("---------------------------");

    return 0;
}
