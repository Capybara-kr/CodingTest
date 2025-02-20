import java.util.ArrayList;

class Solution {
    public ArrayList<Integer> solution(int[] arr) {
        ArrayList<Integer> result = new ArrayList<>();
        
        for (int num : arr) {
            for (int i = 0; i < num; i++) {
                result.add(num);
            }
        }
        
        return result;
    }
}