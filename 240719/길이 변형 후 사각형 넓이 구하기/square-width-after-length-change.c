#include <stdio.h>

int main() {
    int garo,sero;

    scanf("%d %d",&garo,&sero);

    garo = garo + 8;
    sero = sero*3;

    printf("%d\n%d\n%d",garo,sero,garo*sero);
    return 0;
}