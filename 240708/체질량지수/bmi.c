#include <stdio.h>


int main() {
    double h,w,b;

    scanf("%lf %lf",&h,&w);

    b = (10000 * w) / (h*h);

    if(b >= 25) {

        printf("%d\nObesity",(int)b);
    }





    return 0;
}