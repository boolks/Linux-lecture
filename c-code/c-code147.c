#include <stdio.h>
#include <stdlib.h>

int main(){
    puts("*DevC++에서 자료형의 크기 확인*\n");

    printf("char = %d byte\n\n", sizeof(char));
    printf("short = %d byte\n\n", sizeof(short));
    printf("int = %d byte\n\n", sizeof(int));
    printf("long = %d byte\n\n", sizeof(long));
    printf("long long = %d byte\n\n", sizeof(long long));
    printf("float = %d byte\n\n", sizeof(float));
    printf("double = %d byte\n\n", sizeof(double));

    system("pause");

    return 0;
}
