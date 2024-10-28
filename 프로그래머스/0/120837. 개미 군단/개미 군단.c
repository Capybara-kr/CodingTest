#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    int arr[3] = { 0 };
    
    arr[0] = hp / 5;
    hp -= arr[0] * 5;
    
    arr [1] = hp / 3;
    hp -= arr[1] * 3;
    
    arr[2] = hp;
    
    answer = arr[0] + arr[1] + arr[2];
    
    return answer;
}