class Solution {
    public int[] solution(int[] num_list) {    
        int even = 0;
        int odd = 0;
        
        for (int item : num_list) {
            if (item % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
        
        int[] answer = {even, odd};
        
        return answer;
    }
}