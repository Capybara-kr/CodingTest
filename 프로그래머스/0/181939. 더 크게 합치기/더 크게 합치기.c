#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    char str[10];
    char rev_str[10];
    
    snprintf(str, sizeof(str), "%d%d", a, b);
    snprintf(rev_str, sizeof(str), "%d%d", b, a);
    
    if (atoi(str) >= atoi(rev_str)) {
        answer = atoi(str);
    }
    else {
        answer = atoi(rev_str);
    }
    
    return answer;
}