#include <stdio.h>
#include <string.h>

// 사용자 정의 함수 - 키워드 없이 바로 타입으로 시작
int add(int a, int b) {
    return a + b;
}

double multiply(double x, double y) {
    return x * y;
}

void greet(char name[]) {  // void = 반환값 없음
    printf("안녕하세요 %s님!\n", name);
}

int main() {
    printf("=== C 언어 기본 타입들 ===\n");
    
    // 1. 정수형 타입들
    char letter = 'A';                    // 1바이트, 문자 또는 작은 정수
    short small_num = 100;                // 2바이트 정수
    int age = 25;                         // 4바이트 정수 (기본)
    long big_num = 1000000L;              // 8바이트 정수
    
    // 2. 실수형 타입들  
    float height = 175.5f;                // 4바이트 실수
    double weight = 65.7;                 // 8바이트 실수 (더 정확)
    
    // 3. 문자열 (문자 배열)
    char name[] = "오은";                 // 문자 배열
    char greeting[50] = "안녕하세요";      // 크기 지정
    
    // 4. printf에서 여러 값 동시 사용
    printf("이름: %s, 나이: %d살, 키: %.1fcm, 몸무게: %.1fkg\n", 
            name, age, height, weight);
    
    printf("문자: %c, 작은수: %d, 큰수: %ld\n", 
            letter, small_num, big_num);
    
    // 5. 사용자 정의 함수 호출
    int result = add(10, 20);
    double product = multiply(3.5, 2.0);
    
    printf("덧셈 결과: %d\n", result);
    printf("곱셈 결과: %.1f\n", product);
    
    greet("개발자");
    
    // 6. 배열
    int numbers[] = {1, 2, 3, 4, 5};
    printf("첫 번째 숫자: %d\n", numbers[0]);
    printf("배열 크기: %lu개\n", sizeof(numbers) / sizeof(numbers[0]));
    
    return 0;
}