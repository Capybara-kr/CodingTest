import java.util.ArrayList;

class Solution {
    public ArrayList<String> solution(String my_string) {
        ArrayList<String> answer = new ArrayList<>();
        String tmp = "";
        
        for (int i = 0; i < my_string.length(); i++) {
            if (my_string.charAt(i) != ' ') {
                tmp += my_string.charAt(i);
            } else {
                if (!tmp.isEmpty()) {
                    answer.add(tmp);
                    tmp = "";
                }
            }
        }
        
        if (!tmp.isEmpty()) {
            answer.add(tmp);
        }
         
        return answer;
    }
}