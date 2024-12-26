class Solution {
    public String solution(String[] my_strings, int[][] parts) {
        String answer = "";
        
        for (int i = 0; i < parts.length; i++) {
            int[] part = parts[i];
            
            for (int j = part[0]; j < part[1] + 1; j++) {
                answer += my_strings[i].charAt(j);
            }
        }
        
        return answer;
    }
}