#include <stdio.h>

int main() {
    double ft,mi,ftchange,michange;
    ft = 9.2;
    mi = 1.3;
    ftchange = 9.2 * 30.48;
    michange = 1.3 * 160934;
    printf("%.1lfft = %.1lfcm\n%.1lfmi = %.1lfcm",ft,ftchange,mi,michange);

    return 0;
}