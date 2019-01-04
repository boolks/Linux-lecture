#include <stdio.h>
#include <string.h>

int main(){
    char k[6] = "korea";
    char j[6] = "japan";
    char tmp[6];

    printf("원래값 k = %s, j = %s\n\n", k, j);

    strcpy(tmp, k);
    strcpy(k, j);
    strcpy(j, tmp);

    printf("변경 후 k = %s, j = %s\n", k, j);

    return 0;
}
