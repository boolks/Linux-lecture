// 3-325 - switch-case 메뉴 만들기

#include <stdio.h>

int main(){
    int choice;

    puts("\t***MENU***");
    puts("\t1. 공무원");
    puts("\t2. 회사원");
    puts("\t3. 자영업");
    puts("\t4. 여행가");
    puts("\t5. 빵집주인");
    puts("\t6. 백수");
    puts("\t**********");
    printf("\t희막직업 [    ]\b\b\b");

    scanf("%d", &choice);

    switch(choice){
        case 1: printf("\t ==> 공무원\n"); break;
        case 2: printf("\t ==> 회사원\n"); break;
        case 3: printf("\t ==> 자영업\n"); break;
        case 4: printf("\t ==> 여행가\n"); break;
        case 5: printf("\t ==> 빵집주인\n"); break;
        case 6: printf("\t ==> 백수\n"); break;
        default: puts("날 내버려 두세요.");
    }

    return 0;
}
