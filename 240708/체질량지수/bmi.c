#include <stdio.h>
#include <math.h>

int main() {
    double h,w,b;

    scanf("%lf %lf",&h,&w);

    b = (10000 * w) / pow(h,2);

    if(b >= 25) {

        printf("%d\nObesity",(int)b);
    }





    return 0;
}