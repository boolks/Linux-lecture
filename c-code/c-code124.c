// 3-321 - switch-case문 - 1

#include <stdio.h>

int main(){
    char k;

    puts("--------------------------------");
    puts("*switch-case문*");
    puts("--------------------------------");

    while(1){
        puts("\t***MENU***");
        puts("\t1. 월요일");
        puts("\t2. 화요일");
        puts("\t3. 수요일");
        puts("\t4. 목요일");
        puts("\t5. 금요일");
        puts("\t6. 토요일");
        puts("\t7. 일요일");
        puts("\t프로그램 종료 : Q");
        puts("\t좋아하는 요일은 [   ]\b\b\b");
        //fflush(stdin);
        do{
            k = getchar();
            if((k == 'q') || (k == 'Q')){
                return 0;
            }
        }while(getchar() != '\n');

        switch(k){
            case '1': printf("\t월요일\n"); break;
            case '2': printf("\t화요일\n"); break;
            case '3': printf("\t수요일\n"); break;
            case '4': printf("\t목요일\n"); break;
            case '5': printf("\t금요일\n"); break;
            case '6': printf("\t토요일\n"); break;
            case '7': printf("\t일요일\n"); break;
            default : printf("\t그런 요일은 없어요\n");
        }
    }

    puts("--------------------------------");
    puts("switch(k)에서 k가 case값에 해당");
    puts("case에 해당되면 그 문장으로 바로 간다.");
    puts("해당되는 case가 없으면 default에 해당.");
    puts("--------------------------------");

    return 0;
}
