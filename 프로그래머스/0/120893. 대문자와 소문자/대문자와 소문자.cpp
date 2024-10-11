#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = my_string;
    
    for (int i = 0; i < my_string.size(); i++) {
        if (my_string[i] >= 'A' && my_string[i] <= 'Z') {
            answer[i] = my_string[i] + 32;
        }
        else {
            answer[i] = my_string[i] - 32;
        }
    }
    
    return answer;
}