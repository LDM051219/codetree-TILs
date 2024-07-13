#include <stdio.h>
#include <string.h>

int main() {
    char s[101]; // 1 ≤ 문자열 s의 길이 ≤ 100
    char t[101]; // 1 ≤ 문자열 t의 길이 ≤ 100

    // 문자열 s 입력받기
    fgets(s, sizeof(s), stdin);
    // 문자열 t 입력받기
    fgets(t, sizeof(t), stdin);

    // fgets가 입력받은 문자열의 끝에 개행 문자를 포함할 수 있으므로 제거
    s[strcspn(s, "\n")] = 0;
    t[strcspn(t, "\n")] = 0;

    // 문자열 t와 s를 순서 바꿔 출력
    printf("%s\n%s", t, s);

    return 0;
}