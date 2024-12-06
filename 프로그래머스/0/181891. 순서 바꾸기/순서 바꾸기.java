import java.util.*;

class Solution {
    public int[] solution(int[] num_list, int n) {        
        int[] partA = Arrays.copyOfRange(num_list, n, num_list.length);
        int[] partB = Arrays.copyOfRange(num_list, 0, n);
        
        int[] answer = new int[num_list.length];
        
        System.arraycopy(partA, 0, answer, 0, partA.length);
        System.arraycopy(partB, 0, answer, partA.length, partB.length);
          
        return answer;
    }
}