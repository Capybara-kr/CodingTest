#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    
    for (auto iterS1 : s1) {
        for (auto iterS2: s2) {
            if (iterS1 == iterS2) answer++;
        }
    }
    
    return answer;
}