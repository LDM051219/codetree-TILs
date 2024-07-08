#include <stdio.h>


int main() {
    int h,w;
    double b;

    scanf("%d %d",&h,&w);

    b = (10000 * w) / (h*h);

    if(b >= 25) {

        printf("%d\nObesity",(int)b);
    }





    return 0;
}