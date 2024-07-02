#include <stdio.h>

int main() {
   int a,b;
   int ch;

   a = 2;
   b =5;
   
   ch = a;
   a = b;
   b = ch;

   printf("%d\n%d",a,b);

    return 0;
}