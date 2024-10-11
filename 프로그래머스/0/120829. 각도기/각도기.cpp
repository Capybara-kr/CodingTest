#include <string>
#include <vector>

using namespace std;

int solution(int angle) {
    int answer = 0;
    
    if (angle == 90 || angle == 180) {
        (angle == 90) ? answer = 2 : answer = 4;
    }
    else {
        (angle > 90) ? answer = 3 : answer = 1;
    }
    
    return answer;
}