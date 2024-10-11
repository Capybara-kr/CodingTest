#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    
    for (auto iter : array) {
        if (iter > height) {
            answer++;
        }
    }
    
    return answer;
}