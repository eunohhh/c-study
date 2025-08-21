#include <stdio.h>
#include <string.h>

int main() {
    int age = 25;
    double height = 175.6789;
    char grade = 'A';
    char name[] = "오은";
    
    printf("=== 형식 지정자 예제 ===\n");
    
    // %d - 정수 (decimal)
    printf("나이: %d살\n", age);
    
    // %f - 실수 (float) - 기본 6자리 소수점
    printf("키 (기본): %f cm\n", height);
    
    // %.1f - 소수점 1자리까지만
    printf("키 (소수점1자리): %.1f cm\n", height);
    
    // %.2f - 소수점 2자리까지만  
    printf("키 (소수점2자리): %.2f cm\n", height);
    
    // %c - 문자 (character)
    printf("학점: %c\n", grade);
    
    // %s - 문자열 (string)
    printf("이름: %s\n", name);
    
    // %lu - unsigned long (strlen 반환값용)
    printf("이름 길이: %lu글자\n", strlen(name));
    
    // 여러 값 동시에
    printf("%s님은 %d살이고 키는 %.1fcm입니다\n", name, age, height);
    
    return 0;
}