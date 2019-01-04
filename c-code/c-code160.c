#include <stdio.h>
#include <string.h>

int main(){
    char st[] = "qwertyuiopasdfghjklzxcvbnm";

    printf("원본 = %s\n\n", st);
    printf("%s\n", strstr(st, "kl"));

    return 0;
}
