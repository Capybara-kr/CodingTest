class Solution {
    public String solution(String[] str_list, String ex) {
        String answer = "";

        for (int i = 0; i < str_list.length; i++) {
            String str = str_list[i];
            
            if (!str.contains(ex)) {
                answer += str;
            }
        }
        
        return answer;
    }
}