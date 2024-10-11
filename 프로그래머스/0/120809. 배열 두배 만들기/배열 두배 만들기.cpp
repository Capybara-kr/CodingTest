#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for (auto iter : numbers) {
        answer.push_back(iter * 2);
    }
    
    return answer;
}