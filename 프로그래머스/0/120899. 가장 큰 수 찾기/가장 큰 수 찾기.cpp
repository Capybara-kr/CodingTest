#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    int max = array[0];
    
    for (auto iter : array) {
        if (max < iter) {
            max = iter;
        }
    }
    
    answer.push_back(max);
    answer.push_back(find(array.begin(), array.end(), max) - array.begin());
    
    return answer;
}