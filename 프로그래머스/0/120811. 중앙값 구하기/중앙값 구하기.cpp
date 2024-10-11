#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int center = array.size() / 2;
    sort(array.begin(), array.end());

    int answer = array[center];
      
    return answer;
}