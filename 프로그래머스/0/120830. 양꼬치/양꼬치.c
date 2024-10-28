#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int free_drink = n / 10;
    
    k -= free_drink;
    answer = (n * 12000) + (k * 2000);
    
    return answer;
}