#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    // for (auto iter : numbers) {
    //     answer.push_back(iter * 2);
    // }
    
    for (auto iter : numbers) {
        answer.push_back(iter << 1);
    }
    
    return answer;
}