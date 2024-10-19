#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    char str[10];
    
    // 두 정수를 붙여 쓴 값 연산
    snprintf(str, sizeof(str), "%d%d", a, b);
    
    if (atoi(str) >= 2 * a * b) {
        answer = atoi(str);
    }
    else {
        answer = 2 * a * b;
    }
    
    return answer;
}