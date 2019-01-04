#include <stdio.h>
#include <string.h>

int main(){
    char c[20] = "cpp";

    printf("cpp = %s\n\n", c);

    strcat(c, "programming");

    printf("cpp = %s\n\n", c);

    return 0;
}
