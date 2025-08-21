#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  printf("hello\n");

  // 반환값을 변수에 저장하고 사용
  int length = strlen("문자열");
  printf("문자열길이: %d\n", length);

  double result = sqrt(16);
  printf("16의 제곱근: %.1f\n", result);

  return 0;
}