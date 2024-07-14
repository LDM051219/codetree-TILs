#include <stdio.h>

int main() {
    int a,b,c,sum;

    a =1;
    b=2;
    c=3;

    sum = a+b+c;

    a = sum;
    b = sum;
    c = sum;

    printf("%d %d %d",a,b,c);
    return 0;
}