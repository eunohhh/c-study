#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    printf("Hello\n");
    
    // 반환값을 변수에 저장하고 사용
    int length = strlen("문자열");
    printf("문자열 길이: %d\n", length);
    
    double result = sqrt(16);
    printf("16의 제곱근: %.1f\n", result);
    
    // 또는 바로 printf에서 사용
    printf("25의 제곱근: %.1f\n", sqrt(25));
    printf("'Hello'의 길이: %lu\n", strlen("Hello"));
    
    return 0;
}