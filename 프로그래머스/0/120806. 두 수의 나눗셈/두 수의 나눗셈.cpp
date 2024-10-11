#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num1, int num2) {
    int answer;
    
    double div = (double)num1 / num2;
    answer = div * 1000;
    
    return answer;
}