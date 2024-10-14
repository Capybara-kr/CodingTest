#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> numlist) {
    vector<int> answer;
    
    for (auto iter : numlist) {
        if (iter % n == 0) {
            answer.push_back(iter);
        }
    }
    
    return answer;
}