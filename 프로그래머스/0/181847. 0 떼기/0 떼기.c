#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* n_str) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
//  size_t n_str_len = strlen(n_str);
    char* answer = n_str - 1;
//     int idx = 0;
    
//     for ( int i = 0; i < n_str_len; i++ ) {
//         if (n_str[0] == '0' && i == 0) {
//             while (n_str[++i] == '0');
//         }
//         answer[idx++] = n_str[i];
//     }

    while (*++answer) {
        if (*answer != '0') break;
    }
    
    return answer;
}