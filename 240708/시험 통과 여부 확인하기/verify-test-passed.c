#include <stdio.h>

int main() {
    int n;

    scanf("%d",&n);

    if(n >= 80) {
    printf("pass");
    }
    else
    printf("more score", 80 - n);
    return 0;
}