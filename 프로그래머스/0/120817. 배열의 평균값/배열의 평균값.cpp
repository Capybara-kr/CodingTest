#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    
    for (auto iter : numbers) {
        answer += iter;
    }
    
    return answer / numbers.size();
}