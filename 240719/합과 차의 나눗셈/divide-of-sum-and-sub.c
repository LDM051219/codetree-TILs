#include <stdio.h>

int main() {
    float a,b,c;

    scanf("%f %f",&a,&b);

    c= (a+b) / (a-b);
    printf("%.2f",c);
    return 0;
}