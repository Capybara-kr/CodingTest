class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        
        int length = num_list.length;
        int oddSum = 0;
        int evenSum = 0;
        
        for (int i = 0; i < length; i += 2) {
            oddSum += num_list[i];
        }
        
        for (int j = 1; j < length; j += 2) {
            evenSum += num_list[j];
        }
        
        answer = oddSum > evenSum ? oddSum : evenSum;
        
        return answer;
    }
}