#include <stdio.h>

int main() {
    int w;             //w = 추의 무게
    double mw,mul;     // mw = 달의 무게, mul = 곱셉
    w = 13;
    mw = 0.165;
    mul = w * mw;
    printf("%d * %f = %.6lf",w,mw,mul);

    return 0;
}